use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        h: [i64; n],
    };
    let ans = h
        .iter()
        .scan(0, |current_max, &x| {
            if x >= *current_max {
                *current_max = x;
                Some(true)
            } else {
                Some(false)
            }
        })
        .filter(|&x| x)
        .count();
    println!("{:?}", ans);
}
