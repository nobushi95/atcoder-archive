use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = if n >= 1000 { "ABD" } else { "ABC" };
    println!("{}", ans);
}
