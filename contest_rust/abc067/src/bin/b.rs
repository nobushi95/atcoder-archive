use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input![
        n: i64,
        k: i64,
        mut l: [i64; n],
    ];

    l.sort();
    l.reverse();
    let ans = (0..k as usize).map(|i| l[i]).sum::<i64>();
    println!("{}", ans);
}
