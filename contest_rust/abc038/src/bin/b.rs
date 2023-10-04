use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        h1: i64,
        w1: i64,
        h2: i64,
        w2: i64
    };
    let ans = if h1 == h2 || h1 == w2 || w1 == h2 || w1 == w2 {
        "YES"
    } else {
        "NO"
    };
    println!("{}", ans);
}
