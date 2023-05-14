use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = match a {
        x if x >= 13 => b,
        6..=12 => b / 2,
        _ => 0,
    };
    println!("{}", ans);
}
