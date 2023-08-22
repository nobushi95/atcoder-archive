use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
    };
    let ans = format!("{}{}{}", s.first().unwrap(), s.len() - 2, s.last().unwrap());
    println!("{}", ans);
}
