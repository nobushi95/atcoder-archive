use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
    };
    let score = vec![a, b, c];
    let order = score.iter().sorted().rev().collect_vec();
    score
        .iter()
        .for_each(|&i| println!("{}", order.iter().position(|&&x| x == i).unwrap() + 1));
}
