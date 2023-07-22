use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        c: [Chars; 3],
    };
    let ans = format!("{}{}{}", c[0][0], c[1][1], c[2][2]);
    println!("{}", ans);
}
