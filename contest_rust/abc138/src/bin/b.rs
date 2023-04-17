use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        a: [i64; n],
    };

    let sum = a.iter().map(|&ai| 1. / ai as f64).sum::<f64>();
    let ans = 1. / sum;
    println!("{}", ans);
}
