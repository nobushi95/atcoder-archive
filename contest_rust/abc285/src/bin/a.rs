use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { a: usize, b: usize };
    let ans = if a * 2 == b || a * 2 + 1 == b {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
