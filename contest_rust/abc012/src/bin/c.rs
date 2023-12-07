use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let sum = 2025;
    let product = sum - n;
    for i in 1..=9 {
        for j in 1..=9 {
            if i * j == product {
                println!("{i} x {j}");
            }
        }
    }
}
