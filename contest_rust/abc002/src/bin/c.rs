use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        xy: [(i64, i64); 3],
    }
    let a = (xy[2].0 - xy[0].0, xy[2].1 - xy[0].1);
    let b = (xy[1].0 - xy[0].0, xy[1].1 - xy[0].1);
    let ans = (a.0 * b.1 - a.1 * b.0).abs() as f64 / 2.0;
    println!("{:.3}", ans);
}
