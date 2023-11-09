use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
        n: usize,
    };
    let ans = format!("{}{}", s[(n - 1) / 5], s[(n - 1) % 5]);
    println!("{ans}");
}
