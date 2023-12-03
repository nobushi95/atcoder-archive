use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        x: i64,
        a: [i64; n],
    };
    let ans = format!("{:b}", x)
        .chars()
        .rev()
        .enumerate()
        .map(|(i, x)| if x == '1' { a[i] } else { 0 })
        .sum::<i64>();
    println!("{ans}");
}
