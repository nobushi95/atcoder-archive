use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, a: usize, b: usize,
        c: [usize; n],
    };
    let ans = c.iter().position(|&x| x == a + b).unwrap() + 1;
    println!("{ans}");
}
