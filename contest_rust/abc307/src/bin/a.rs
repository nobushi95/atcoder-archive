use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [[usize; 7]; n],
    };
    let ans = a.iter().map(|x| x.iter().sum::<usize>()).join(" ");
    println!("{ans}");
}
