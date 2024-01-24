use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;
use superslice::Ext;

fn main() {
    input! {
        n: usize,
        mut p: [usize; n],
    };
    p.prev_permutation();
    let ans = p.iter().join(" ");
    println!("{ans}");
}
