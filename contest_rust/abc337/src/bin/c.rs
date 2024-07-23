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
    let tbl = a
        .iter()
        .enumerate()
        .map(|(i, &x)| (x, (i + 1) as i64))
        .collect::<HashMap<_, _>>();

    let mut cur = tbl.get(&-1).unwrap().clone();
    let mut ans = vec![cur];
    for _ in 0..n - 1 {
        cur = tbl.get(&cur).unwrap().clone();
        ans.push(cur);
    }

    let ans = ans.iter().join(" ");
    println!("{ans}");
}
