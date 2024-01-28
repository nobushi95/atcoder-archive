use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, x: usize,
        p: [usize; n],
    };
    let ans = p.iter().position(|&pi| pi == x).unwrap() + 1;
    println!("{ans}");
}
