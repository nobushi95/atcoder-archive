use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        x: i64,
    };
    let ans = if x >= a && a + b >= x { "YES" } else { "NO" };
    println!("{}", ans);
}
