use itertools::Itertools;
use num::abs;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [usize; n],
    };
    let mut v = vec![];
    a.windows(2).for_each(|x| {
        v.push(x[0]);
        if x[1] > x[0] {
            (x[0] + 1..x[1]).for_each(|y| v.push(y));
        } else {
            (x[1] + 1..x[0]).rev().for_each(|y| v.push(y));
        }
    });
    v.push(*a.last().unwrap());
    let ans = v.iter().join(" ");
    println!("{ans}");
}
