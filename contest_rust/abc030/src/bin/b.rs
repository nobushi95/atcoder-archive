use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        m: i64
    };
    let n = n as f64;
    let m = m as f64;
    let d = (n * 60. + m) * 5.5 % 360.;
    let ans = d.min(360. - d);
    println!("{:.4}", ans);
}
