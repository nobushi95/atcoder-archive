use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        p: [i64; n],
    };
    let ans = p
        .windows(3)
        .filter(|x| (x[0] < x[1] && x[1] < x[2] || (x[2] < x[1] && x[1] < x[0])))
        .count();
    println!("{}", ans);
}
