use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        r: i64,
    };
    let ans = 3 * r * r;
    println!("{}", ans);
}
