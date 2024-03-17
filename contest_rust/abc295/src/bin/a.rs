use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        w: [String; n],
    };
    let tbl = vec!["and", "not", "that", "the", "you"];
    let ans = if w.iter().any(|x| tbl.contains(&x.as_str())) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
