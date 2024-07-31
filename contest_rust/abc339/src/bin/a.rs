use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { s: String };
    let ans = s.split('.').last().unwrap();
    println!("{ans}");
}
