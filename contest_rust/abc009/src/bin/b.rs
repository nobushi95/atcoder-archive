use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        mut a: [i64; n],
    };
    let ans = a.iter().sorted().rev().dedup().nth(1).unwrap();
    println!("{ans}");
}
