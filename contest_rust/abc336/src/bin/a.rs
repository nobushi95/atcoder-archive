use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { n: usize };
    println!("L{}ng", (0..n).map(|_| 'o').join(""));
}
