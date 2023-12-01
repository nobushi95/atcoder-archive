use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        a: [i64; n],
    };
    let sum = a.iter().filter(|&&x| x != 0).sum::<i64>();
    let size = a.iter().filter(|&&x| x != 0).count() as i64;
    let ans = (sum + size - 1) / size;
    println!("{ans}");
}
