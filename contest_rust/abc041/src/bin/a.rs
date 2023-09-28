use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
        i: usize,
    };
    let ans = s[i - 1];
    println!("{}", ans);
}
