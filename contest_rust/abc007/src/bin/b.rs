use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: String,
    };
    let ans = if a == "a" { "-1" } else { "a" };
    println!("{ans}");
}
