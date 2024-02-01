use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: String,
        t: String,
    };
    let ans = if s.contains(&t) { "Yes" } else { "No" };
    println!("{ans}");
}
