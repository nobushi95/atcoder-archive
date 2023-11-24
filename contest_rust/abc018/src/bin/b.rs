use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        mut s: Chars,
        n: usize,
        lr: [(usize, usize); n],
    };
    lr.iter().for_each(|(l, r)| s[*l - 1..*r].reverse());
    let ans = s.into_iter().join("");
    println!("{ans}");
}
