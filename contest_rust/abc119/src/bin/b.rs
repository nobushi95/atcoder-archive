use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        xu: [(f64, String); n],
    };
    let ans = xu
        .iter()
        .map(|(x, u)| if u == "JPY" { *x } else { *x * 380000_f64 })
        .sum::<f64>();
    println!("{}", ans);
}
