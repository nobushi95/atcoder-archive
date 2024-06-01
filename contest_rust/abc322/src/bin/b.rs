use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: usize, m: usize,
        s: String,
        t: String,
    };
    let t_pre = t[0..n].chars().join("");
    let t_suff = t[m - n..].chars().join("");
    let ans = if t_pre == s && t_suff == s {
        0
    } else if t_pre == s && t_suff != s {
        1
    } else if t_pre != s && t_suff == s {
        2
    } else {
        3
    };
    println!("{ans}");
}
