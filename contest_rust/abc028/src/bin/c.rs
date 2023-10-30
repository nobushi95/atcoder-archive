use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! { n: [i64; 5] };
    let ans = n
        .iter()
        .combinations(3)
        .map(|x| x.into_iter().sum::<i64>())
        .sorted_by(|a, b| b.cmp(a))
        .nth(2)
        .unwrap();
    println!("{}", ans);
}
