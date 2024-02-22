use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: String,
    };
    let ans = s.replace("na", "nya");
    println!("{ans}");
}
