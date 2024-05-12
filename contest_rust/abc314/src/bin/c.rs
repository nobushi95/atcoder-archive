use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize, m: u64,
        s: Chars,
        c: [u64; n],
    };
    let mut tbl = HashMap::<u64, VecDeque<char>>::new();
    for i in 0..n {
        tbl.entry(c[i]).or_insert(VecDeque::new()).push_back(s[i]);
    }
    for (_, ss) in &mut tbl {
        let back = ss.pop_back().unwrap();
        ss.push_front(back);
    }
    let ans = c
        .iter()
        .map(|x| tbl.get_mut(x).unwrap().pop_front().unwrap())
        .join("");
    println!("{ans}");
}
