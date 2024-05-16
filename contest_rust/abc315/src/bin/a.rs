use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        s: Chars,
    };
    let aiueo = "aiueo".chars().collect_vec();
    let ans = s.iter().filter(|x| !aiueo.contains(x)).join("");
    println!("{ans}");
}
