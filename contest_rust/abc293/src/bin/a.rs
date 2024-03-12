use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        mut s: Chars,
    };
    for i in (0..s.len() - 1).step_by(2) {
        s.swap(i, i + 1);
    }
    let ans = s.iter().join("");
    println!("{ans}");
}
