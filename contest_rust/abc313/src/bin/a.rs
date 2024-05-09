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
        p: [i64; n],
    };
    let ans = 0.max(p[1..].iter().max().unwrap_or(&0) - p.first().unwrap() + 1);
    println!("{ans}");
}
