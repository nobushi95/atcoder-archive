use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: [i64; 3],
    };
    let ans = if n.iter().filter(|&x| *x == 5).count() == 2
        && n.iter().filter(|&x| *x == 7).count() == 1
    {
        "YES"
    } else {
        "NO"
    };
    println!("{}", ans);
}
