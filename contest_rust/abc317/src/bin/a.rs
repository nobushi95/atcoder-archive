use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize, h: u64, x: u64,
        p: [u64; n],
    };
    let ans = p.iter().map(|pi| pi + h).position(|pi| pi >= x).unwrap() + 1;
    println!("{ans}");
}
