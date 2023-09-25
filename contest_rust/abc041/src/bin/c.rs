use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        a: [i64; n],
    };
    let mut pairs = a.iter().enumerate().collect::<Vec<(usize, &i64)>>();
    pairs.sort_by(|l, r| r.1.cmp(l.1));
    for (i, _) in pairs {
        println!("{}", i + 1);
    }
}
