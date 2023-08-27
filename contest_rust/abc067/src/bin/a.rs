use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = if a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0 {
        "Possible"
    } else {
        "Impossible"
    };
    println!("{}", ans);
}
