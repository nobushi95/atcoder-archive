use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
    };
    let n = n % 30;
    let mut tbl = (1..=6).collect_vec();
    for i in 0..n {
        let l = i % 5;
        let r = (i % 5) + 1;
        tbl.swap(l, r);
    }

    let ans = tbl.iter().join("");
    println!("{ans}");
}
