use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
    };
    let set = HashSet::from([a, b, c]);
    let ans = set.len();
    println!("{}", ans);
}
