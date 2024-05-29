use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        n: Chars
    };
    let ans = if n.windows(2).all(|x| x[0] > x[1]) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
