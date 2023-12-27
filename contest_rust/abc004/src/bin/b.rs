use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        c: [[char; 4]; 4],
    };
    for i in (0..4).rev() {
        println!("{}", c[i].iter().rev().join(" "));
    }
}
