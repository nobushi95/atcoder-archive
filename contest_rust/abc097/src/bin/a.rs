use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
        d: i64,
    };
    let ans = if (a - c).abs() <= d || ((a - b).abs() <= d && (b - c).abs() <= d) {
        "Yes"
    } else {
        "No"
    };
    println!("{}", ans);
}
