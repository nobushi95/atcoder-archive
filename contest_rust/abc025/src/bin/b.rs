use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: i64,
        b: i64,
        sd: [(String, i64); n],
    };
    let p = sd
        .iter()
        .map(|(si, di)| {
            let d = if *di < a {
                a
            } else if *di > b {
                b
            } else {
                *di
            };
            if *si == "East" {
                d
            } else {
                -d
            }
        })
        .sum::<i64>();
    let ans = if p >= 1 {
        format!("East {p}")
    } else if p <= -1 {
        let p = p.abs();
        format!("West {p}")
    } else {
        format!("0")
    };
    println!("{ans}");
}
