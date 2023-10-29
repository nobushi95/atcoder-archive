use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        w: String
    };
    let ans = format!("{}s", w);
    println!("{}", ans);
}
