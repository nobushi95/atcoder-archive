use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        mut x: [usize; 5 * n],
    };
    x.sort();
    let ans = x[n..(4 * n)].iter().sum::<usize>() as f64 / (3 * n) as f64;
    println!("{:.6}", ans);
}
