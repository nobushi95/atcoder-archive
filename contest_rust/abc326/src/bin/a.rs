use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        x: i64, y: i64,
    };
    let d = y - x;
    let ans = if d <= 2 && d >= -3 { "Yes" } else { "No" };
    println!("{ans}");
}
