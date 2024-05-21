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
        abcd: [(u64, u64, u64, u64); n],
    };
    let mut s = 0;
    for i in 0..100_u64 {
        for j in 0..100_u64 {
            if abcd
                .iter()
                .any(|(a, b, c, d)| *a <= i && i < *b && *c <= j && j < *d)
            {
                s += 1;
            }
        }
    }
    println!("{s}");
}
