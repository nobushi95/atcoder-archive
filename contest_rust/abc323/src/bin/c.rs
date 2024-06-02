use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize, m: usize,
        a: [u64; m],
        s: [Chars; n],
    };
    let cur_scores = s
        .iter()
        .map(|si| {
            si.iter()
                .enumerate()
                .filter(|&(_, x)| *x == 'o')
                .map(&|(i, _)| a[i])
                .sum::<u64>()
        })
        .enumerate()
        .map(|(i, x)| i as u64 + 1 + x)
        .collect_vec();

    let max_score = cur_scores.iter().max().unwrap().clone();

    for i in 0..n {
        let mut failed = s[i]
            .iter()
            .enumerate()
            .filter(|&(_, x)| *x == 'x')
            .map(|(j, _)| a[j])
            .collect_vec();
        failed.sort();
        failed.reverse();
        let mut ans = 0;
        let mut cur_score = cur_scores[i];
        while cur_score < max_score {
            cur_score += failed[ans];
            ans += 1;
        }
        println!("{ans}");
    }
}
