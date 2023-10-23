use itertools::Itertools;
use num_integer::lcm;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        n: i64,
    };
    let x = lcm(a, b);
    let ans = if n % x == 0 { n } else { (n / x + 1) * x };
    println!("{}", ans);
}
