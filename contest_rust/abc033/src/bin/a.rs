use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: Chars,
    };
    let ans = if n.iter().all(|c| c == n.first().unwrap()) {
        "SAME"
    } else {
        "DIFFERENT"
    };
    println!("{}", ans);
}
