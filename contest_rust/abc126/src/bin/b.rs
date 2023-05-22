use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: String
    };
    let upper = s[..2].parse::<i64>().unwrap();
    let lower = s[2..].parse::<i64>().unwrap();
    let ans = match (upper, lower) {
        (1..=12, 1..=12) => "AMBIGUOUS",
        (1..=12, _) => "MMYY",
        (_, 1..=12) => "YYMM",
        _ => "NA",
    };
    println!("{}", ans);
}
