use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { b: u64, g: u64 };
    let ans = if b > g { "Bat" } else { "Glove" };
    println!("{ans}");
}
