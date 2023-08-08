use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        c: [Chars; 2],
    };
    let ans = if c[0][1] == c[1][1] && c[0][0] == c[1][2] && c[0][2] == c[1][0] {
        "YES"
    } else {
        "NO"
    };
    println!("{}", ans);
}
