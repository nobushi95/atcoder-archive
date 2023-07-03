use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        mut a: [i64; n],
    };
    a.sort();
    let ans = (a.first().unwrap() - a.last().unwrap()).abs();
    println!("{}", ans);
}
