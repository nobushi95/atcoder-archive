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
    let mut ans = 0;
    for ai in a {
        ans = 0.max(ans + ai);
    }
    println!("{ans}");
}
