use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        a: i64,
    };
    let ans = n.pow(2) - a;
    println!("{}", ans);
}
