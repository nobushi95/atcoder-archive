use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, p: u64, q: u64,
        d: [u64; n],
    };
    let ans = p.min(q + d.iter().min().unwrap());
    println!("{ans}");
}
