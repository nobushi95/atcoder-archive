use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        t: i64,
        x: i64,
    };
    let ans = t as f64 / x as f64;
    println!("{}", ans);
}
