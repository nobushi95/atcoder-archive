use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        mut a: [u64; n],
        b: [u64; m],
    };
    a.extend(b.iter().map(|x| x + 1));
    a.sort();
    let ans = a[m - 1];
    println!("{ans}");
}
