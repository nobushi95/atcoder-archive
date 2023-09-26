use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

const MOD: usize = 1_000_000_007;

fn main() {
    input! {
        a: usize,
        b: usize,
        c: usize,
    };
    let ans = a * b % MOD * c % MOD;
    println!("{}", ans);
}
