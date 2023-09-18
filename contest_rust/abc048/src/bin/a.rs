use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: Chars,
        s: Chars,
        c: Chars,
    };
    let ans = format!("A{}C", s.first().unwrap());
    println!("{}", ans);
}
