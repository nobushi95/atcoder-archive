use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        w: i64,
        a: i64,
        b: i64,
    };
    let ans = (max(a, b) - min(a + w, b + w)).max(0);
    println!("{}", ans);
}
