use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        n: usize, k:usize,
        mut a: [usize; n],
    };
    let a = a.iter().collect::<HashSet<_>>();

    let ans = match (0..k).filter(|x| !a.contains(x)).next() {
        Some(x) => x,
        None => k,
    };

    println!("{ans}");
}
