use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        h: [usize; n],
    };
    let ans = h.iter().enumerate().max_by_key(|x| x.1).unwrap().0 + 1;
    println!("{ans}");
}
