use itertools::Itertools;
use num_traits::Pow;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { s: Chars };
    let ans = s
        .iter()
        .rev()
        .map(|&x| x as u8 - 'A' as u8 + 1)
        .enumerate()
        .map(|(i, x)| x as i64 * 26_i64.pow(i as u32))
        .sum::<i64>();
    println!("{ans}");
}
