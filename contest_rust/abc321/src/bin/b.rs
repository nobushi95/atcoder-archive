use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    clone,
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize, x: u64,
        a: [u64; n - 1],
    }
    let mut ans = -1;
    for i in 0..=100 {
        let mut cur = a.clone();
        cur.push(i);
        cur.sort();
        let sum = cur[1..cur.len() - 1].iter().sum::<u64>();
        if sum >= x {
            ans = i as i64;
            break;
        }
    }
    println!("{ans}");
}
