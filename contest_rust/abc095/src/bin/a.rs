use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
    };
    let ans = 700 + s.iter().filter(|&&x| x == 'o').count() * 100;
    println!("{}", ans);
}
