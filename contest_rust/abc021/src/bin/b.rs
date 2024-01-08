use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        n: usize,
        a: usize, b: usize,
        k: usize,
        p: [usize; k],
    };
    let mut tbl = HashSet::new();
    tbl.insert(a);
    tbl.insert(b);
    tbl.extend(&p);

    let ans = if tbl.len() == p.len() + 2 {
        "YES"
    } else {
        "NO"
    };
    println!("{ans}");
}
