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
        s: Chars,
    };
    let ans = if s.windows(2).any(|x| x == ['a', 'b'] || x == ['b', 'a']) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
