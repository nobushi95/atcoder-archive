use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: String
    };
    let ans = if n.contains('3') || n.parse::<i64>().unwrap() % 3 == 0 {
        "YES"
    } else {
        "NO"
    };
    println!("{ans}");
}
