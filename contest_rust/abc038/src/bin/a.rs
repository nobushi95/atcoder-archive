use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars
    };
    let ans = if *s.last().unwrap() == 'T' {
        "YES"
    } else {
        "NO"
    };
    println!("{}", ans);
}
