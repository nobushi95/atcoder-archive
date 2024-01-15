use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { r: i64, c: i64 };
    let ans = if (r - 8).abs().max((c - 8).abs()) % 2 == 0 {
        "white"
    } else {
        "black"
    };
    println!("{ans}");
}
