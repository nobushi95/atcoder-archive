use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashMap};

fn main() {
    input! {
        n: usize,
        a: [i64; n],
    };
    let mut tbl = HashMap::new();
    a.iter().for_each(|&x| *tbl.entry(x).or_insert(0) += 1);
    let ans = tbl
        .iter()
        .filter(|(_, &x)| x > 1)
        .map(|(_, &x)| x - 1)
        .sum::<i64>();
    println!("{ans}");
}
