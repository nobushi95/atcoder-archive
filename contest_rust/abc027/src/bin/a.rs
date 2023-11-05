use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        l: [i64; 3],
    };
    let ans = if l[0] == l[1] {
        l[2]
    } else if l[1] == l[2] {
        l[0]
    } else if l[0] == l[2] {
        l[1]
    } else {
        l[0]
    };
    println!("{}", ans);
}
