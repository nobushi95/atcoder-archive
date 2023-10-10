use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: [Chars; n],
    }
    for j in 0..n {
        for i in (0..n).rev() {
            print!("{}", s[i][j]);
        }
        println!();
    }
}
