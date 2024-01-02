use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = (1..=n).map(|x| (x * 10000) as f64).sum::<f64>() / n as f64;
    println!("{:.6}", ans);
}
