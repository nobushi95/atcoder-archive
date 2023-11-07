use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
    };
    let ans = (1..=a).map(|x| x * (a - x)).max().unwrap();
    println!("{ans}");
}
