use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: u64, b: u64,
    };
    let ans = if b - a == 1 && (a != 3 && a != 6 && a != 9) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
