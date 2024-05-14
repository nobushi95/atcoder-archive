use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize,
        fs: [(u64, u64); n],
    };
    let mut tbl = HashMap::<u64, Vec<u64>>::new();
    fs.iter().for_each(|&(f, s)| {
        tbl.entry(f).or_insert(vec![]).push(s);
    });

    let same_pattern = tbl
        .iter()
        .filter(|x| x.1.len() > 1)
        .map(|x| {
            let sorted = x.1.iter().sorted().collect_vec();
            sorted[sorted.len() - 1] + sorted[sorted.len() - 2] / 2
        })
        .max()
        .unwrap_or(0);

    let mut diff_pattern_vec = tbl
        .iter()
        .map(|x| {
            let sorted = x.1.iter().sorted().collect_vec();
            *sorted.last().unwrap()
        })
        .collect_vec();
    diff_pattern_vec.sort();

    let ans = if diff_pattern_vec.len() >= 2 {
        let diff_pattern =
            *diff_pattern_vec.last().unwrap() + diff_pattern_vec[diff_pattern_vec.len() - 2];
        same_pattern.max(diff_pattern)
    } else {
        same_pattern
    };
    println!("{ans}");
}
