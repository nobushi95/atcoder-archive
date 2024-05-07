use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: String,
    };
    let tbl = vec!["ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"];
    let ans = if tbl.contains(&s.as_str()) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
