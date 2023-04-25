use itertools::Itertools;
use num::abs_sub;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let diff = (a - b).abs();
    let ans = if diff % 2 == 0 {
        (diff / 2 + min(a, b)).to_string()
    } else {
        String::from("IMPOSSIBLE")
    };
    println!("{}", ans)
}
