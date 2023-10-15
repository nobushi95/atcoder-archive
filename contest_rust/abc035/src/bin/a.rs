use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        w: i64,
        h: i64,
    };
    let ans = if w / 4 * 3 == h { "4:3" } else { "16:9" };
    println!("{}", ans);
}
