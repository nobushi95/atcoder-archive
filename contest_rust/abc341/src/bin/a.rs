use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize,
    };
    let ans = (0..2 * n + 1)
        .map(|x| if x % 2 == 0 { 1 } else { 0 })
        .join("");
    println!("{ans}");
}
