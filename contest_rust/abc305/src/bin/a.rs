use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
    };
    let rem = n % 5;
    let ans = if rem == 0 {
        n
    } else if rem > 2 {
        n + 5 - rem
    } else {
        n - rem
    };
    println!("{ans}");
}
