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
        d: [usize; n],
    };
    let mut ans = 0;
    for month in 1..=n {
        for day in 1..=d[month - 1] {
            let date = format!("{month}{day}");
            let nums = date.chars().collect::<HashSet<_>>();
            if (nums.len() == 1) {
                ans += 1;
            }
        }
    }

    println!("{ans}");
}
