use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
    };
    let ans = x / 10 + x % 10;
    println!("{ans}");
}
