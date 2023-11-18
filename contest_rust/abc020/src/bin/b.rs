use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: String,
        b: String,
    };
    let ans = (a + &b).parse::<i64>().unwrap() * 2;
    println!("{ans}");
}
