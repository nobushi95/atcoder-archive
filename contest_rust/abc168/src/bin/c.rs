use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;
use std::f64::consts::PI;

fn main() {
    input! { a: f64, b: f64, h: f64, m: f64 };
    let rad = PI * 2.0 * (h / 12.0 + (m / 60.0) / 12.0 - (m / 60.0));
    let rsq = (a * a + b * b) - (2.0 * a * b) * rad.cos();
    let ans = rsq.sqrt();
    println!("{:.10}", ans);
}
