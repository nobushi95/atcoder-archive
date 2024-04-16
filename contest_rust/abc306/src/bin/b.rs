use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: [char; 64],
    };
    let ans = u64::from_str_radix(a.iter().rev().join("").as_str(), 2).unwrap();
    println!("{ans}");
}
