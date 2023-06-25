use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = (1..=n)
        .step_by(2)
        .map(|x| (1..=x).filter(|d| x % d == 0).count())
        .filter(|x| *x == 8)
        .count();
    println!("{}", ans);
}
