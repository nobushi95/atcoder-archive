use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        h: usize, w: usize,
        s: [Chars; h],
    };
    let ans = s
        .iter()
        .map(|x| x.iter().filter(|&&x| x == '#').count())
        .sum::<usize>();
    println!("{ans}");
}
