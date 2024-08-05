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
        p: [usize; n],
        q: usize,
        ab: [(usize, usize); q],
    };
    let tbl = p
        .iter()
        .enumerate()
        .map(|(i, x)| (*x, i))
        .collect::<HashMap<_, _>>();

    let a = ab.iter().map(|&(a, _)| a).collect_vec();
    let b = ab.iter().map(|&(_, b)| b).collect_vec();

    for i in 0..q {
        let a_i = tbl.get(&a[i]).unwrap();
        let b_i = tbl.get(&b[i]).unwrap();
        let ans = if a_i < b_i { a[i] } else { b[i] };
        println!("{ans}");
    }
}
