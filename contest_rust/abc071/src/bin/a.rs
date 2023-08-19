use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
        a: i64,
        b: i64,
    };
    let ans = if (a - x).abs() < (b - x).abs() {
        "A"
    } else {
        "B"
    };
    println!("{}", ans);
}
