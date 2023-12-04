use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = if a % b == 0 { 0 } else { b - (a % b) };
    println!("{ans}");
}
