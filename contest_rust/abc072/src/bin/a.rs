use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
        t: i64,
    };
    let ans = (x - t).max(0);
    println!("{}", ans);
}
