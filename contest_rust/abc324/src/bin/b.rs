use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        mut n: u64,
    };

    while n % 2 == 0 {
        n /= 2;
    }

    while n % 3 == 0 {
        n /= 3;
    }

    let ans = if n == 1 { "Yes" } else { "No" };
    println!("{ans}");
}
