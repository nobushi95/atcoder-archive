use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: char,
        b: char,
    };
    let ans = if (a == 'H' && b == 'H') || (a == 'D' && b == 'D') {
        "H"
    } else {
        "D"
    };
    println!("{}", ans);
}
