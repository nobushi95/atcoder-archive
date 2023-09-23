use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = (1 + n) * n / 2;
    println!("{}", ans);
}
