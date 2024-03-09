use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
    };
    let ans = s.iter().position(|x| x.is_uppercase()).unwrap() + 1;
    println!("{ans}");
}
