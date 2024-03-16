use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        w: [String; n],
    };
    let tbl = vec![
        "and".to_string(),
        "not".to_string(),
        "that".to_string(),
        "the".to_string(),
        "you".to_string(),
    ];
    let ans = if w.iter().any(|x| tbl.contains(x)) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
