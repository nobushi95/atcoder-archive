use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        mut n: [i64; 3]
    };
    n.sort();
    let ans = n[0] + n[1] + n[2] * 10;
    println!("{}", ans);
}
