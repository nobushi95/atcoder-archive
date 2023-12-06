use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: char
    };
    let ans = x as u8 - b'A' + 1;
    println!("{ans}");
}
