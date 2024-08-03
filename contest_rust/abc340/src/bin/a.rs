use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        a: i64, b: i64, d: usize
    };
    let ans = (a..=b).step_by(d).join(" ");
    println!("{ans}");
}
