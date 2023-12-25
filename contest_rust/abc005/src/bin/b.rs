use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        t: [i64; n],
    };
    let ans = t.iter().sorted().next().unwrap();
    println!("{ans}");
}
