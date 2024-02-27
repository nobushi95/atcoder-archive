use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        ab: [(i64, i64); n],
    };
    let ans = ab.iter().map(|(a, b)| a + b);
    for a in ans {
        println!("{a}");
    }
}
