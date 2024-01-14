use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { n: usize, };
    let ans = (1..=5)
        .map(|x| n.saturating_sub(1000_usize.pow(x) - 1_usize))
        .sum::<usize>();
    println!("{ans}");
}
