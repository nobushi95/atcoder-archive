use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        mut s: Chars
    };
    s[3] = '8';
    println!("{}", s.iter().join(""));
}
