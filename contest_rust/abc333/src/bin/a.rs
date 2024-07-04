use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { n: u64 };
    let v = vec![n; n as usize];
    let ans = v.iter().join("");
    println!("{ans}");
}
