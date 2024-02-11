use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        mut s: Chars,
    };
    let mut inside = false;
    for i in 0..n {
        match s[i] {
            '"' => {
                inside = !inside;
            }
            ',' => {
                if !inside {
                    s[i] = '.';
                }
            }
            _ => {}
        };
    }
    let ans = s.iter().join("");
    println!("{ans}");
}
