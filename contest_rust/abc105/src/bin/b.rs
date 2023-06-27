use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = match (0..=n / 4).filter(|x| (n - x * 4) % 7 == 0).next() {
        Some(_x) => "Yes",
        None => "No",
    };
    println!("{}", ans);
}
