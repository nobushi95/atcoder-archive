use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
        k: i64,
    };
    let bind = [a, b, c];
    let ans = bind.iter().max().unwrap() * (2_i64.pow(k as u32) - 1) + bind.iter().sum::<i64>();
    println!("{}", ans);
}
