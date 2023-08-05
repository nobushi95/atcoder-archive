use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
        y: i64,
        z: i64,
    };
    let ans = if x % (y + z) >= z {
        x / (y + z)
    } else {
        x / (y + z) - 1
    };
    println!("{}", ans);
}
