use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        se: [(i64, i64); 3],
    };
    let ans = se.iter().map(|(s, e)| s * e / 10).sum::<i64>();
    println!("{ans}");
}
