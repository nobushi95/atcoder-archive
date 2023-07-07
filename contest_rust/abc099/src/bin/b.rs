use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let d = b - a;
    let ans = d * (d + 1) / 2 - b;
    println!("{}", ans);
}
