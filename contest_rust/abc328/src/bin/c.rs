use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize, q: usize,
        s: Chars,
        lr: [(usize, usize); q],
    };
    let acc = s
        .windows(2)
        .map(|x| x[0] == x[1])
        .scan(0, |state, x| {
            if x {
                *state += 1;
            }
            Some(*state)
        })
        .collect_vec();
    for (l, r) in lr {
        let l = if l as i32 - 2 < 0 { 0 } else { acc[l - 2] };
        let r = if r as i32 - 2 < 0 { 0 } else { acc[r - 2] };
        let ans = r - l;
        println!("{ans}");
    }
}
