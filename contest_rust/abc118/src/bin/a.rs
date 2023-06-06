use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = if b % a == 0 { a + b } else { b - a };
    println!("{}", ans);
}
