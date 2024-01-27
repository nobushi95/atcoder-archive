use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, fmt::format};

fn main() {
    input! {
        s: Chars,
    };
    let ans = match s.iter().rposition(|&x| x == 'a') {
        Some(x) => format!("{}", x + 1),
        None => format!("-1"),
    };
    println!("{ans}");
}
