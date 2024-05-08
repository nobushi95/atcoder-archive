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
        ab: [(Usize1, Usize1); m],
    };
    let mut tbl = vec![0; n];
    ab.iter().for_each(|&(_, b)| {
        tbl[b] += 1;
    });
    let candidates = tbl
        .iter()
        .enumerate()
        .filter(|&(i, x)| *x == 0)
        .collect_vec();
    let ans = if candidates.len() == 1 {
        (candidates.first().unwrap().0 + 1) as i64
    } else {
        -1
    };
    println!("{ans}");
}
