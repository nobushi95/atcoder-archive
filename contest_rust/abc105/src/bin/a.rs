use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        k: i64,
    };
    let ans = if n % k == 0 { 0 } else { 1 };
    println!("{}", ans);
}
