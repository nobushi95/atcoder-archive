use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: [String; n],
    };
    let ans = if s.iter().filter(|&x| x == "For").count()
        > s.iter().filter(|&x| x == "Against").count()
    {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
