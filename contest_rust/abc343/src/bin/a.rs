use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { a: i64, b: i64 }
    for ans in 0..=9 {
        if ans != a + b {
            println!("{ans}");
            return;
        }
    }
}
