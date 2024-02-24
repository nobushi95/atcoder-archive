use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        s: [Chars; n],
        t: [Chars; m],
    };
    let ans = s
        .iter()
        .filter(|x| t.iter().any(|y| x.ends_with(y)))
        .count();
    println!("{ans}");
}
