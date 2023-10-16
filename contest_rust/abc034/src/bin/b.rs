use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = if n % 2 == 0 { n - 1 } else { n + 1 };
    println!("{}", ans);
}
