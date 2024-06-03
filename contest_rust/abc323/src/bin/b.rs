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
        s: [Chars; n],
    };

    let ans = s
        .iter()
        .enumerate()
        .sorted_by(|(_, l), (_, r)| {
            r.iter()
                .filter(|&x| *x == 'o')
                .count()
                .cmp(&l.iter().filter(|&x| *x == 'o').count())
        })
        .map(|(i, _)| i + 1)
        .join(" ");

    println!("{ans}");
}
