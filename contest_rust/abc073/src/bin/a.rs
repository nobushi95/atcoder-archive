use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = if n / 10 == 9 || n % 10 == 9 {
        "Yes"
    } else {
        "No"
    };
    println!("{}", ans);
}
