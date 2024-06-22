use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize, m: usize,
        a: [usize; m],
    };
    let mut votes = vec![0; n + 1];
    let mut ans = 0;
    for ai in a {
        votes[ai] += 1;
        if votes[ans] < votes[ai] {
            ans = ai;
        } else if votes[ans] == votes[ai] {
            ans = ans.min(ai);
        }
        println!("{ans}");
    }
}
