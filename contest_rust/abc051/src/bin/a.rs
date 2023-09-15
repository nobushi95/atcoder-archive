use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: String,
    };
    let ans = s.replace(",", " ");
    println!("{}", ans);
}
