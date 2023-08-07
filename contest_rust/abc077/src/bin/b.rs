use itertools::Itertools;
use num_integer::Roots;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = n.sqrt().pow(2);
    println!("{}", ans);
}
