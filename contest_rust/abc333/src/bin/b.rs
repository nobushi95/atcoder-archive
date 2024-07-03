use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        s: String,
        t: String,
    };
    let p = String::from("ABCDEAEDCBA");
    let ans = if p.contains(&s) == p.contains(&t) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
