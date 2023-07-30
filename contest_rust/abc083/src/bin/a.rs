use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
        d: i64
    };
    let left = a + b;
    let right = c + d;
    let ans = if left > right {
        "Left"
    } else if left == right {
        "Balanced"
    } else {
        "Right"
    };
    println!("{}", ans);
}
