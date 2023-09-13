use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
    };
    let ans = if x < 1200 { "ABC" } else { "ARC" };
    println!("{}", ans);
}
