use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { n: usize };
    for i in (0..=n).rev() {
        println!("{i}");
    }
}
