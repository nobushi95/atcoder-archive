use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        l: [i64; n],
    };
    let &max_length = l.iter().max().unwrap();
    let ans = if (l.iter().sum::<i64>() - max_length) > max_length {
        "Yes"
    } else {
        "No"
    };
    println!("{}", ans);
}
