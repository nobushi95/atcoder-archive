use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, f64::EPSILON};

fn distance(p1: (f64, f64), p2: (f64, f64)) -> f64 {
    ((p1.0 - p2.0).powf(2.0) + (p1.1 - p2.1).powf(2.0)).sqrt()
}

fn main() {
    input! {
        tx_a: (f64, f64),
        tx_b: (f64, f64),
        t: f64,
        v: f64,
        n: usize,
        xy: [(f64, f64); n],
    };
    let ans = if xy
        .iter()
        .any(|xy| distance(tx_a, *xy) + distance(tx_b, *xy) <= t * v + EPSILON)
    {
        "YES"
    } else {
        "NO"
    };
    println!("{ans}");
}
