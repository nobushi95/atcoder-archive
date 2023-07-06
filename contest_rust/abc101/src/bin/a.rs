use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
    };
    let ans = s
        .iter()
        .map(|&x| if x == '+' { 1 } else { -1 })
        .sum::<i64>();
    println!("{}", ans);
}
