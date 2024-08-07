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
        a: [[i64; n]; n],
    };
    let ans = a
        .iter()
        .map(|x| {
            x.iter()
                .enumerate()
                .filter(|&(_, x)| *x == 1)
                .map(|(i, _)| i + 1)
                .join(" ")
        })
        .join("\n");
    println!("{ans}");
}
