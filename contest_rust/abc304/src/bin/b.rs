use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
    };
    let ans = match n {
        ..=999 => n,
        ..=9999 => n - n % 10,
        ..=99999 => n - n % 100,
        ..=999999 => n - n % 1000,
        ..=9999999 => n - n % 10000,
        ..=99999999 => n - n % 100000,
        ..=999999999 => n - n % 1000000,
        _ => unreachable!(),
    };
    println!("{ans}");
}
