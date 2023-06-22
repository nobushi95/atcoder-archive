use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = if a % 2 == 0 || b % 2 == 0 {
        "No"
    } else {
        "Yes"
    };
    println!("{}", ans);
}
