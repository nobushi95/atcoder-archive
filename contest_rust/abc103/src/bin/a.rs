use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: [i64; 3],
    };
    let ans = a.iter().max().unwrap() - a.iter().min().unwrap();
    println!("{}", ans);
}
