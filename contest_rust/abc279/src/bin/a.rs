use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { s: Chars };
    let ans = s.iter().filter(|&x| *x == 'v').count() + s.iter().filter(|&x| *x == 'w').count() * 2;
    println!("{ans}");
}
