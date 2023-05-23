use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        k: usize,
        mut s: Chars,
    };
    s[k - 1] = s[k - 1].to_ascii_lowercase();
    println!("{}", s.iter().join(""));
}
