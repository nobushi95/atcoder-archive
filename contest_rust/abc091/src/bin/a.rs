use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
    };
    let ans = if a + b >= c { "Yes" } else { "No" };
    println!("{}", ans);
}
