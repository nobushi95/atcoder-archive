use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { s: Chars };
    let ans = if s.first().unwrap().is_uppercase() && s[1..].iter().all(|&x| x.is_lowercase()) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
