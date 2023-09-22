use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        k: i64,
        x: i64,
        y: i64,
    };
    let ans = x * n.min(k) + y * (n - k).max(0);
    println!("{}", ans);
}
