use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        mut x: i64,
        m: [i64; n],
    };
    x -= m.iter().sum::<i64>();
    let ans = n + x / m.iter().min().unwrap();
    println!("{}", ans);
}
