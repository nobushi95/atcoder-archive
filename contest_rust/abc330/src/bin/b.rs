use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize, l: u64, r: u64,
        a: [u64; n],
    };
    let ans = a.iter().map(|x| x.clamp(&l, &r)).join(" ");
    println!("{ans}");
}
