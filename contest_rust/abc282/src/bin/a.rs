use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { k: u8 };
    let ans = (0..k).map(|x| (b'A' + x) as char).join("");
    println!("{ans}");
}
