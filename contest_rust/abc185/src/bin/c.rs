use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { l: usize };
    let ans = (1..=11).fold(1, |acc, x| acc * (l - x) / x);
    println!("{ans}");
}
