use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
    };
    let ans = (1..=1000_i64).filter(|&n| n.pow(4) == x).next().unwrap();
    println!("{}", ans);
}
