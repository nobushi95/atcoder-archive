use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        s: Chars,
    };
    let ans = if s
        .iter()
        .enumerate()
        .all(|(i, &x)| if (i + 1) % 2 == 0 { x == '0' } else { true })
    {
        "Yes"
    } else {
        "No"
    };

    println!("{ans}");
}
