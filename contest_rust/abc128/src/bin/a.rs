use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        p: i64,
    };
    let ans = (a * 3 + p) / 2;
    println!("{}", ans);
}
