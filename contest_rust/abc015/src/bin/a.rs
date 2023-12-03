use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: String,
        b: String,
    };
    let ans = if a.len() > b.len() { a } else { b };
    println!("{ans}");
}
