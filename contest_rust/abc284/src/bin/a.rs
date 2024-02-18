use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: [String; n],
    };
    for i in (0..n).rev() {
        println!("{}", s[i]);
    }
}
