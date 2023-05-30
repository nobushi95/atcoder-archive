use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: [i64; 5],
        k: i64,
    };
    let ans = if n.iter().combinations(2).all(|x| (x[0] - x[1]).abs() <= k) {
        "Yay!"
    } else {
        ":("
    };
    println!("{}", ans);
}
