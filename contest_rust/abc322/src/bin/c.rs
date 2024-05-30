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
        a: [usize; m],
    };
    for i in 1..=n {
        let idx = a.lower_bound(&i);
        println!("{}", a[idx] - i);
    }
}
