use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { s: Chars };
    let majority = if s[0] == s[1] { s[0] } else { s[2] };
    let ans = s.iter().position(|&x| x != majority).unwrap() + 1;
    println!("{ans}");
}
