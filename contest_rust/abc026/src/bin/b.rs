use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, f64::consts::PI};

fn main() {
    input! {
        n: i64,
        mut r: [i64; n],
    };
    r.sort();
    r.reverse();
    let ans = r
        .iter()
        .enumerate()
        .map(|(i, &x)| if i % 2 == 0 { x * x } else { -(x * x) })
        .sum::<i64>() as f64
        * PI;
    println!("{:.7}", ans);
}
