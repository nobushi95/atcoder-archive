use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    let ans = if s.iter().all(|&x| x != 'x') && s.iter().any(|&x| x == 'o') {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
