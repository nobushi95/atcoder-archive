use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let bind = [a + b, a - b, a * b];
    let ans = bind.iter().max().unwrap();
    println!("{}", ans);
}
