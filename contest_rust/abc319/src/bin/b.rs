use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! { n: i64 };
    let ans = (0..=n)
        .map(|i| {
            for j in 1..=9 {
                if n % j == 0 && i % (n / j) == 0 {
                    return (b'0' + j as u8) as char;
                }
            }
            '-'
        })
        .join("");
    println!("{ans}");
}
