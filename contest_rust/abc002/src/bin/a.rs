use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
        y: i64,
    };
    let ans = x.max(y);
    println!("{ans}");
}
