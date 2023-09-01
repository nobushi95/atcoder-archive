use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
    };
    let ans = if a + b >= 10 {
        String::from("error")
    } else {
        (a + b).to_string()
    };
    println!("{}", ans);
}
