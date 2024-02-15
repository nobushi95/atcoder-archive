use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { a: u32, b: u32 };
    let ans = a.pow(b);
    println!("{ans}");
}
