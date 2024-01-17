use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        mut x: i64,
        mut y: i64,
        mut z: i64,
    };

    if y < 0 {
        (x, y, z) = (-x, -y, -z);
    };

    let ans = if x < y {
        x.abs()
    } else {
        if z > y {
            -1
        } else {
            z.abs() + (x - z).abs()
        }
    };
    println!("{ans}");
}
