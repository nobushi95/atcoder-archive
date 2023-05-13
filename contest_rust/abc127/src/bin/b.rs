use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        r: i64,
        d: i64,
        mut x: i64
    };

    (0..10).for_each(|_| {
        x = x * r - d;
        println! {"{}", x}
    });
}
