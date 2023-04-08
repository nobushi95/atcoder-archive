use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = max(a - (b * 2), 0);
    println!("{}", ans);
}
