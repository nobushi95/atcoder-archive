use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        i: i64,
    };
    let ans = n - i + 1;
    println!("{}", ans);
}
