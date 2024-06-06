use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize,
        a: [u64; n],
    };
    let ans = if a.iter().all(|x| x == a.first().unwrap()) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
