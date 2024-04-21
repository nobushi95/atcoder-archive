use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashMap};

fn main() {
    input! {
        n: usize, m: usize,
        c: [String; n],
        d: [String; m],
        p: [u64; m + 1],
    };
    let price_tbl = d
        .iter()
        .zip(p[1..].iter())
        .map(|(key, &value)| (key, value))
        .collect::<HashMap<_, _>>();
    let ans = c
        .iter()
        .map(|x| price_tbl.get(x).unwrap_or(&&p[0]))
        .sum::<u64>();
    println!("{ans}");
}
