use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        m: usize,
        d: [i64; m],
    };
    let mut mid = (d.iter().sum::<i64>() + 1) / 2;
    for i in 0..m {
        if mid <= d[i] {
            println!("{} {}", i + 1, mid);
            return;
        } else {
            mid -= d[i];
        }
    }
}
