use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize, d: u64, p: u64,
        mut f: [u64; n],
    };
    f.sort();
    let s = f
        .iter()
        .scan(0, |state, &x| {
            *state = *state + x;
            Some(*state)
        })
        .collect_vec();

    let k = (n as u64 + d - 1) / d;
    let mut ans = p * k;
    for i in 0..k {
        ans = ans.min(s[n - 1 - (i * d) as usize] + (p * i));
    }
    println!("{ans}");
}
