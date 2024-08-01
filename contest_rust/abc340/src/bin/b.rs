use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { q: usize };
    let mut v = vec![];
    for _ in 0..q {
        input! { c: i64 };
        if c == 1 {
            input! { x: i64 };
            v.push(x);
        } else if c == 2 {
            input! { k: i64 };
            let ans = v[v.len() - k as usize];
            println!("{ans}");
        }
    }
}
