use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let diff_abs = (a - b).abs();
    let ans = diff_abs.min(10 - diff_abs);
    println!("{ans}");
}
