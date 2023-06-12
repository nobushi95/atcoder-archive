use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { d: i64 };
    let ans = match d {
        22 => "Christmas Eve Eve Eve",
        23 => "Christmas Eve Eve",
        24 => "Christmas Eve",
        25 => "Christmas",
        _ => unreachable!(),
    };
    println! {"{}", ans};
}
