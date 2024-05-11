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
        mut a: [i64; n],
    };
    a.sort();
    let sum = a.iter().sum::<i64>();
    let mut b = vec![sum / n as i64; n];
    b[n - sum as usize % n..].iter_mut().for_each(|x| *x += 1);
    let ans = a.iter().zip(b).map(|(&a, b)| (a - b).abs()).sum::<i64>() / 2;
    println!("{ans}");
}
