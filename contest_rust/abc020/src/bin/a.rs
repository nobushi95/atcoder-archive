use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        q: i64,
    };
    let ans = if q == 1 { "ABC" } else { "chokudai" };
    println!("{ans}");
}
