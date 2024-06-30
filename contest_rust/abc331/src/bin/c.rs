use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize,
        a: [i64; n],
    };
    let mut tbl = HashMap::<i64, Vec<_>>::new();
    for i in 0..n {
        tbl.entry(a[i]).or_insert(vec![]).push(i);
    }
    let mut sum = a.iter().sum::<i64>();
    let mut ans = vec![0; n];
    for v in tbl.keys().sorted() {
        sum -= v * (tbl[v].len() as i64);
        for &i in tbl[v].iter() {
            ans[i] = sum;
        }
    }
    let ans = ans.iter().join(" ");
    println!("{ans}");
}
