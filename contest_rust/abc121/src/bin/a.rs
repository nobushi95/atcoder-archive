use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        h: i64,
        w: i64,
        hi: i64,
        wi: i64,
    };
    let ans = (h - hi) * (w - wi);
    println!("{}", ans);
}
