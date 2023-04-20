use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = max(a + b, a - b);
    let ans = max(ans, a * b);
    println!("{}", ans);
}
