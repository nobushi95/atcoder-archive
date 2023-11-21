use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        mut n: [i64; 3],
    };
    n.sort();
    let ans = n[1];
    println!("{ans}");
}
