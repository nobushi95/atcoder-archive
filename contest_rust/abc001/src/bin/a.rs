use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        h1: i64,
        h2: i64,
    };
    let ans = h1 - h2;
    println!("{ans}");
}
