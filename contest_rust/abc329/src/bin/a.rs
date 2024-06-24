use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { s: Chars };
    let ans = s.iter().join(" ");
    println!("{ans}");
}
