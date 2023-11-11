use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        t: i64,
        a: [i64; n],
    };
    let ans = a
        .windows(2)
        .map(|x| {
            let d = x[1] - x[0];
            if d < t {
                d
            } else {
                t
            }
        })
        .sum::<i64>()
        + t;
    println!("{ans}");
}
