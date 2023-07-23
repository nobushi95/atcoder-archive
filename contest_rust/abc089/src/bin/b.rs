use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: [char; n],
    };
    let ans = if s.iter().unique().count() == 3 {
        "Three"
    } else {
        "Four"
    };
    println!("{}", ans);
}
