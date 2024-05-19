use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize,
        mut a: [u64; n],
    };
    a.sort();
    let ans = a
        .windows(2)
        .filter(|x| x[0] + 1 != x[1])
        .map(|x| x[0] + 1)
        .next()
        .unwrap();
    println!("{ans}");
}
