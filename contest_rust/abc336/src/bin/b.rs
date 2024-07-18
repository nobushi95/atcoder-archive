use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { n: i64 };
    let ans = match format!("{:b}", n).chars().rev().position(|x| x == '1') {
        Some(x) => x,
        None => 0,
    };
    println!("{ans}");
}
