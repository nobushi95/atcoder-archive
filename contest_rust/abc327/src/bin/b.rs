use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { b: u64 };

    let mut ans = -1;
    let mut a = 1_u64;
    while a.pow(a as u32) <= b {
        if a.pow(a as u32) == b {
            ans = a as i64;
            break;
        }
        a += 1;
    }

    println!("{ans}");
}
