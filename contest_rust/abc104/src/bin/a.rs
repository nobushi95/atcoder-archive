use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        r: i64,
    };
    let ans = match r {
        0..=1199 => "ABC",
        1200..=2799 => "ARC",
        _ => "AGC",
    };
    println!("{}", ans);
}
