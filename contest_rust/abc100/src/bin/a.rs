use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = if a <= 8 && b <= 8 { "Yay!" } else { ":(" };
    println!("{}", ans);
}
