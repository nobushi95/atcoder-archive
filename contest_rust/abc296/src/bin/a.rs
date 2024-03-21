use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    let ans = if s.windows(2).all(|x| x[0] != x[1]) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
