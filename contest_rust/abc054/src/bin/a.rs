use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        mut a: i64,
        mut b: i64,
    };
    if a == 1 {
        a += 13;
    }
    if b == 1 {
        b += 13;
    }
    let ans = if a > b {
        "Alice"
    } else if a < b {
        "Bob"
    } else {
        "Draw"
    };
    println!("{}", ans);
}
