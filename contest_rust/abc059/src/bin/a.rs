use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s1: Chars,
        s2: Chars,
        s3: Chars,
    };
    let ans = format!(
        "{}{}{}",
        s1.first().unwrap().to_uppercase(),
        s2.first().unwrap().to_uppercase(),
        s3.first().unwrap().to_uppercase()
    );
    println!("{}", ans);
}
