use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        d: i64,
    };
    let ans = ((a + 1) * d).max(a * (d + 1));
    println!("{}", ans);
}
