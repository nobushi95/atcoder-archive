use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        k: i64,
    };
    let ans = (k / 2) * ((k + 1) / 2);
    println!("{}", ans);
}
