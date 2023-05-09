use itertools::Itertools;
use num_traits::abs_sub;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        w: [i64; n]
    };
    let sum = w.iter().sum::<i64>();
    let mut acc = w
        .iter()
        .scan(0, |cur, x| {
            *cur += x;
            Some(*cur)
        })
        .collect::<Vec<_>>();
    let ans = acc.iter().map(|x| (sum - 2 * x).abs()).min().unwrap();
    println!("{}", ans);
}
