use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [usize; n],
    };
    let mut v = 0;
    let mut is_passed = vec![false; n];
    let mut s = vec![];
    while !is_passed[v] {
        is_passed[v] = true;
        s.push(v);
        v = a[v] - 1;
    }

    let pos = s.iter().position(|&x| x == v).unwrap();
    let ans = &s[pos..];
    println!("{}", ans.len());
    println!("{}", ans.iter().map(|x| x + 1).join(" "));
}
