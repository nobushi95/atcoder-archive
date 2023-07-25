use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        a: i64,
    };
    let ans = if n % 500 <= a { "Yes" } else { "No" };
    println!("{}", ans);
}
