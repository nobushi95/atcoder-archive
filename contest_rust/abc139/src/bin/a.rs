use itertools::Itertools;
use proconio::{input, marker::*};
use regex::internal::Char;
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
        t: Chars,
    };

    let ans = s.iter().zip(t.iter()).filter(|(s, t)| s == t).count();
    println!("{}", ans);
}
