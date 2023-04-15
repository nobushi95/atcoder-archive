use itertools::Itertools;
use num::pow;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };

    println!("{}", pow(n, 3));
}
