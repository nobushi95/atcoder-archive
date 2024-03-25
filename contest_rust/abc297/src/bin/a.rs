use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, d: usize,
        t: [usize; n],
    };
    for i in 0..n - 1 {
        if t[i + 1] - t[i] <= d {
            println!("{}", t[i + 1]);
            return;
        }
    }
    println!("-1");
}
