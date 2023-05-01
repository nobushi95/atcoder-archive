use itertools::Itertools;
use num::Signed;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        l: i64,
    };
    let sum = (l..(l + n)).sum::<i64>();
    let ans = sum - (l..(l + n)).min_by(|a, b| a.abs().cmp(&b.abs())).unwrap();
    println!("{}", ans);
}
