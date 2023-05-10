use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        p: i64,
        q: i64,
        r: i64
    };
    let ans = vec![p, q, r]
        .into_iter()
        .combinations(2)
        .map(|x| x.into_iter().sum::<i64>())
        .min()
        .unwrap();
    println!("{}", ans);
}
