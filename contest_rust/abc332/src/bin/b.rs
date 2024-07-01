use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        k: i64, g: i64, m: i64,
    };
    let mut x = 0;
    let mut y = 0;
    let mut z = 0;
    for i in 0..k {
        if x == g {
            x = 0;
        } else if (y == 0) {
            y = m;
        } else {
            z = y.min(g - x);
            x += z;
            y -= z;
        }
    }
    println!("{x} {y}");
}
