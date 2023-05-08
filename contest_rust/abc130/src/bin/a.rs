use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
        a: i64,
    };
    let ans = if x < a { 0 } else { 10 };
    println!("{}", ans);
}
