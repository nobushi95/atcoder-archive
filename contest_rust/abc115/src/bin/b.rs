use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        p: [i64; n],
    };
    let max = p.iter().max().unwrap();
    let ans = p.iter().sum::<i64>() - max / 2;
    println!("{}", ans);
}
