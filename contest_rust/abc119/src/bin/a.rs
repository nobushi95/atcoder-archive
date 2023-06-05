use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: String,
    };
    let ans = if s <= String::from("2019/04/30") {
        "Heisei"
    } else {
        "TBD"
    };
    println!("{}", ans);
}
