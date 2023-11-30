use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        m: i64,
        d: i64,
    };
    let ans = if m % d == 0 { "YES" } else { "NO" };
    println!("{ans}");
}
