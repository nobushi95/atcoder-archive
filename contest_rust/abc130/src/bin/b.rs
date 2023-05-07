use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        x: i64,
        l: [i64; n],
    };
    let ans = l
        .iter()
        .scan(0, |cur, y| {
            *cur += y;
            Some(*cur)
        })
        .filter(|&y| y <= x)
        .count()
        + 1;
    println!("{}", ans);
}
