use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: Chars,
        b: Chars,
        c: Chars,
    };
    let ans = if a.last().unwrap() == b.first().unwrap() && b.last().unwrap() == c.first().unwrap()
    {
        "YES"
    } else {
        "NO"
    };
    println!("{}", ans);
}
