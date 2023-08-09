use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        k: i64,
    };
    let ans = (0..n).fold(1, |acc, _| (acc * 2).min(acc + k));
    println!("{}", ans);
}
