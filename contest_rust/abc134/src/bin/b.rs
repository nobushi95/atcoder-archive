use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        d: i64,
    };
    let ans = (n + 2 * d) / (2 * d + 1);
    println!("{}", ans);
}
