use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
    };
    let ans = match x {
        7 | 5 | 3 => "YES",
        _ => "NO",
    };
    println!("{}", ans);
}
