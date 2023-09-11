use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = 800 * n - 200 * (n / 15);
    println!("{}", ans);
}
