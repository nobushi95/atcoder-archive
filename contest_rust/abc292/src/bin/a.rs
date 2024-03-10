use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
    };
    let ans = s.iter().map(|x| x.to_uppercase()).join("");
    println!("{ans}");
}
