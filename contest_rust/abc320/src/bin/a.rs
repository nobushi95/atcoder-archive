use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        a: u32, b: u32
    };
    let ans = a.pow(b) + b.pow(a);
    println!("{ans}");
}
