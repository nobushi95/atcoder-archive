use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { s: Chars };

    let mut max = 0;
    let mut ans = 'a';
    for c in 'a'..='z' {
        let cur = s.iter().filter(|&x| *x == c).count();
        if max < cur {
            ans = c;
            max = cur;
        }
    }

    println!("{ans}");
}
