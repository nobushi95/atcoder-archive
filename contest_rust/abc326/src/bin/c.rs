use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize, m: u64,
        mut a: [u64; n],
    };
    a.sort();
    let mut ans = 0;
    for i in 0..n {
        let cur = a.lower_bound(&(a[i] + m)) - a.lower_bound(&a[i]);
        ans = ans.max(cur);
    }
    println!("{ans}");
}
