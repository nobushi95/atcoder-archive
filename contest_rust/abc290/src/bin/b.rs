use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, mut k: usize,
        s: Chars,
    };
    let ans = s
        .iter()
        .map(|&x| {
            if x == 'o' && k > 0 {
                k -= 1;
                'o'
            } else {
                'x'
            }
        })
        .join("");
    println!("{ans}");
}
