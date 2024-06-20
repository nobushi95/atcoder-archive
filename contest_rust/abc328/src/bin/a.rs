use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize, x: u64,
        s: [u64; n],
    };
    let ans = s.iter().filter(|&si| *si <= x).sum::<u64>();
    println!("{ans}");
}
