use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        lr: [(i64, i64); n],
    }
    let ans = lr.iter().map(|(l, r)| r - l + 1).sum::<i64>();
    println!("{}", ans);
}
