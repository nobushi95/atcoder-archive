use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize,
        xy: [(i64, i64); n],
    };
    let x = xy.iter().map(|&(x, _)| x).sum::<i64>();
    let y = xy.iter().map(|&(_, y)| y).sum::<i64>();
    let ans = if x > y {
        "Takahashi"
    } else if x == y {
        "Draw"
    } else {
        "Aoki"
    };
    println!("{ans}");
}
