use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: [Chars; 8],
    };
    let tbl = "abcdefgh".chars().collect_vec();
    for i in 0..8 {
        for j in 0..8 {
            if s[i][j] == '*' {
                println!("{}{}", tbl[j], 8 - i);
            }
        }
    }
}
