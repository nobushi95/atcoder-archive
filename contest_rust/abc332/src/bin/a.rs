use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize, s: i64, k: i64,
        pq: [(i64, i64); n],
    };
    let mut ans = pq.iter().map(|(p, q)| p * q).sum::<i64>();
    if ans < s {
        ans += k;
    }
    println!("{ans}");
}
