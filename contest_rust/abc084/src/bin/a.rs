use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        m: i64,
    };
    let ans = 48 - m;
    println!("{}", ans);
}
