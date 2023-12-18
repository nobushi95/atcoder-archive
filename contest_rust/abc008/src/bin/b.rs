use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashMap};

fn main() {
    input! {
        n: usize,
        s: [String; n],
    };
    let mut tbl = HashMap::new();
    s.iter().for_each(|x| *tbl.entry(x).or_insert(0) += 1);
    let ans = tbl.iter().max_by(|x, y| x.1.cmp(y.1)).unwrap().0;
    println!("{ans}");
}
