use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64, b: i64,
    };
    let ans = (a + b - 1) / b;
    println!("{ans}");
}
