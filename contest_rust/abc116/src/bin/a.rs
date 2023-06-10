use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        _: i64
    };
    let ans = a * b / 2;
    println!("{}", ans);
}
