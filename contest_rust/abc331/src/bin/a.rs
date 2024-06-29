use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        mm: u64, dd: u64,
        y: u64, m: u64, d: u64,
    };
    let ans = if m == mm && d == dd {
        format!("{} 1 1", y + 1)
    } else if d == dd {
        format!("{} {} 1", y, m + 1)
    } else {
        format!("{} {} {}", y, m, d + 1)
    };
    println!("{ans}");
}
