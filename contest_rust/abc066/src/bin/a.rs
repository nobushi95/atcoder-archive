use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
    };
    let mut v = vec![a, b, c];
    v.sort();
    let ans = v[0] + v[1];
    println!("{}", ans);
}
