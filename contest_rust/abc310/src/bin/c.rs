use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        n: usize,
        s: [String; n],
    };
    let mut tbl = HashSet::new();
    for si in s.iter() {
        if tbl.contains(si) || tbl.contains(&si.chars().rev().join("")) {
            continue;
        }
        tbl.insert(si);
    }
    let ans = tbl.len();
    println!("{ans}");
}
