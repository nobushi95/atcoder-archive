use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        t: i64,
        ct: [(i64, i64); n],
    };
    let ans = match ct
        .iter()
        .filter(|(_ci, ti)| *ti <= t)
        .min_by_key(|(ci, _ti)| *ci)
    {
        Some((ci, _ti)) => ci.to_string(),
        None => String::from("TLE"),
    };

    println!("{}", ans);
}
