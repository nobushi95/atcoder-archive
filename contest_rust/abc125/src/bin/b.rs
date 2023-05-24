use itertools::{izip, Itertools};
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        v: [i64; n],
        c: [i64; n],
    };
    let ans = izip!(v, c)
        .map(|(vi, ci)| vi - ci)
        .filter(|&x| x > 0)
        .sum::<i64>();
    println!("{}", ans);
}
