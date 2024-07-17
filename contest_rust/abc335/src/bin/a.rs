use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { mut s: Chars };
    s.pop();
    s.push('4');
    let ans = s.iter().join("");
    println!("{ans}");
}
