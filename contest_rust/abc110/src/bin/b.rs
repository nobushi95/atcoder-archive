use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        m: i64,
        xx: i64,
        yy: i64,
        x: [i64; n],
        y: [i64; m],
    };
    let &xmax = x.iter().max().unwrap();
    let &ymin = y.iter().min().unwrap();
    let diff = ymin - xmax;
    let ans = if diff > 0 && xx < xmax && ymin < yy {
        "No War"
    } else {
        "War"
    };
    println!("{}", ans);
}
