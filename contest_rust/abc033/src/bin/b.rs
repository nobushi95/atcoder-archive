use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, string};

fn main() {
    input! {
        n: i64,
        sp: [(String, i64); n],
    };
    let sum = sp.iter().map(|x| x.1).sum::<i64>();
    let ans = match sp.iter().filter(|(s, p)| *p > sum / 2).next() {
        Some(n) => n.0.clone(),
        None => String::from("atcoder"),
    };
    println!("{}", ans);
}
