use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let next_month = n + 1;
    let ans = if next_month == 12 {
        next_month
    } else {
        next_month % 12
    };
    println!("{ans}");
}
