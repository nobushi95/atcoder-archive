use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [usize; n],
    };
    let ans = a.iter().filter(|&x| x % 2 == 0).join(" ");
    println!("{ans}");
}
