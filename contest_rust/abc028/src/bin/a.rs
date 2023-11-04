use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = match n {
        ..=59 => "Bad",
        ..=89 => "Good",
        ..=99 => "Great",
        100 => "Perfect",
        _ => unreachable!(""),
    };
    println!("{}", ans);
}
