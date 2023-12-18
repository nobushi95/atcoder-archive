use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: usize,
        t: usize,
    };
    let ans = t - s + 1;
    println!("{ans}");
}
