use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: u64, m: u64, p: u64,
    };
    let mut ans = 0;
    let mut i = m;
    while i <= n {
        ans += 1;
        i += p;
    }
    println!("{ans}");
}
