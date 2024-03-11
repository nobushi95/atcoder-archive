use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [usize; n],
    };
    let mut tbl = vec![false; n];
    a.iter().enumerate().for_each(|(i, x)| {
        if !tbl[i] {
            tbl[x - 1] = true;
        }
    });
    let ans = tbl.iter().enumerate().filter(|&(i, x)| !x).collect_vec();
    println!("{}", ans.len());
    println!("{}", ans.iter().map(|x| x.0 + 1).join(" "));
}
