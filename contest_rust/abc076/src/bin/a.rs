use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        r: i64,
        g: i64,
    };
    let ans = g * 2 - r;
    println!("{}", ans);
}
