use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        m: i64,
    };
    let ans = (n - 1) * (m - 1);
    println!("{}", ans);
}
