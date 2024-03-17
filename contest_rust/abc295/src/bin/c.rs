use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashMap};

fn main() {
    input! {
        n: usize,
        a: [usize; n],
    };
    let mut tbl = HashMap::new();
    a.iter().for_each(|x| {
        *tbl.entry(x).or_insert(0) += 1;
    });
    let ans = tbl.iter().map(|(_, x)| x / 2).sum::<usize>();
    println!("{ans}");
}
