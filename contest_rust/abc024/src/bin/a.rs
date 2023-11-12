use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
        k: i64,
        s: i64,
        t: i64,
    };
    let sum = a * s + t * b;
    let ans = if s + t >= k { sum - c * (s + t) } else { sum };
    println!("{ans}");
}
