use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize,
        wx: [(u64, u64); n],
    };
    let mut ans = 0;
    for i in 0..24 {
        let cur = wx
            .iter()
            .filter(|(_, x)| {
                let local_time = (*x + i) % 24;
                local_time >= 9 && local_time < 18
            })
            .map(|(w, _)| *w)
            .sum::<u64>();
        ans = ans.max(cur);
    }
    println!("{ans}");
}
