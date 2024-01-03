use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        w: Chars
    };
    let except_tbl = String::from("aiueo").chars().collect_vec();
    let ans = w.iter().filter(|x| !except_tbl.contains(x)).join("");
    println!("{ans}");
}
