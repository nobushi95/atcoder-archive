use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = if n % 2 == 0 { n } else { n * 2 };
    println!("{}", ans);
}
