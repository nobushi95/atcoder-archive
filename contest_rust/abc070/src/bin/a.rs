use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = if n / 100 == n % 10 { "Yes" } else { "No" };
    println!("{}", ans);
}
