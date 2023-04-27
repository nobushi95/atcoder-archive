use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        a: i64,
        b: i64,
    };
    let ans = min(a * n, b);
    println!("{}", ans);
}
