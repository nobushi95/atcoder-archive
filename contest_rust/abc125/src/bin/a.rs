use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        t: i64,
    };
    let ans = (t / a) * b;
    println!("{}", ans);
}
