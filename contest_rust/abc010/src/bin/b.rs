use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [i64; n],
    };
    let tbl = vec![0, 0, 1, 0, 1, 2, 3, 0, 1, 0];
    let ans = a.iter().map(|&x| tbl[x as usize]).sum::<i64>();
    println!("{ans}");
}
