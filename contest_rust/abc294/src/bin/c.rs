use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        a: [usize; n],
        b: [usize; m],
    };
    let a = a.iter().map(|x| (x, true)).collect_vec();
    let b = b.iter().map(|x| (x, false)).collect_vec();
    let mut c = vec![a, b].concat();
    c.sort_by(|a, b| a.0.cmp(&b.0));
    let ans_a = c
        .iter()
        .enumerate()
        .filter(|(_, x)| x.1)
        .map(|(i, _)| i + 1)
        .join(" ");
    let ans_b = c
        .iter()
        .enumerate()
        .filter(|(_, x)| !x.1)
        .map(|(i, _)| i + 1)
        .join(" ");
    println!("{ans_a}");
    println!("{ans_b}");
}
