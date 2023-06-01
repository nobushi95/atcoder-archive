use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        k: usize,
    };
    let ans = (1..=100)
        .rev()
        .filter(|&x| a % x == 0 && b % x == 0)
        .collect_vec()[k - 1];
    println!("{}", ans);
}
