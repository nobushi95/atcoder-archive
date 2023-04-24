use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        p: [i64; n],
    };

    let wrong = p
        .iter()
        .enumerate()
        .filter(|(i, &val)| i + 1 != val as usize)
        .count();

    let ans = if wrong == 0 || wrong == 2 {
        "YES"
    } else {
        "NO"
    };
    println!("{}", ans);
}
