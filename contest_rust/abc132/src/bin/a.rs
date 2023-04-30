use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        mut s: Bytes
    };
    s.sort();
    s.dedup();
    let ans = if s.len() == 2 { "Yes" } else { "No" };
    println!("{}", ans);
}
