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
        mut a: [i32; n],
    };
    a.sort();
    a.dedup();
    let ans = a[a.len() - 2];
    println!("{ans}");
}
