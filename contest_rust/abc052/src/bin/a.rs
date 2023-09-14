use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
        d: i64
    };
    let ans = (a * b).max(c * d);
    println!("{}", ans);
}
