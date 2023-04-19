use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        k: i64,
        x: i64,
    };

    let l = max(x - k + 1, -1000000);
    let r = min(x + k - 1, 1000000);
    let ans = (l..=r).join(" ");
    println!("{}", ans);
}
