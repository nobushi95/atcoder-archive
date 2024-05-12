use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! { n: usize };
    let mut a = vec![vec![]; n];
    for i in 0..n {
        input! {
            c: usize,
            ai: [u64; c],
        };
        a[i] = ai;
    }
    input! { x: u64 };
    let b_candidate = a
        .iter()
        .enumerate()
        .filter(|(_, ai)| ai.contains(&x))
        .collect_vec();

    let min = b_candidate
        .iter()
        .min_by(|l, r| l.1.len().cmp(&r.1.len()))
        .unwrap_or(&(0, &vec![]))
        .1
        .len();

    let b = b_candidate
        .iter()
        .filter(|(_, bi)| bi.len() == min)
        .map(|(i, _)| i + 1)
        .sorted()
        .collect_vec();
    println!("{}", b.len());
    let ans = b.iter().join(" ");
    println!("{ans}");
}
