use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    let pipe_positions = s.iter().positions(|&x| x == '|').collect_vec();
    let ans = if s[pipe_positions.first().unwrap() + 1..*pipe_positions.last().unwrap()]
        .iter()
        .any(|&x| x == '*')
    {
        "in"
    } else {
        "out"
    };
    println!("{ans}");
}
