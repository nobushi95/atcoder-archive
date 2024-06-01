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
        s: Chars,
    };
    let ans = match s.windows(3).position(|x| x.iter().join("") == "ABC") {
        Some(x) => x as i64 + 1,
        None => -1,
    };
    println!("{ans}");
}
