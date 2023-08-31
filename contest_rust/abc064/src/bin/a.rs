use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        r: i64,
        g: i64,
        b: i64,
    };
    let ans = if (r * 100 + g * 10 + b) % 4 == 0 {"YES"} else {"NO"};
    println!("{}", ans);
}
