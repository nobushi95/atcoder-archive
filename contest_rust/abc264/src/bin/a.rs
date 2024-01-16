use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { l: usize, r: usize };
    let ans = &"atcoder"[l - 1..r];
    println!("{ans}");
}
