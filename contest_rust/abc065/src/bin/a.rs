use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: i64,
        a: i64,
        b: i64,
    };
    let ans = if b - a <= 0 {
        "delicious"
    } else if b - a <= x {
        "safe"
    } else {
        "dangerous"
    };
    println!("{}", ans);
}
