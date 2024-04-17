use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    let ans = s.iter().map(|x| format!("{x}{x}")).join("");
    println!("{ans}");
}
