use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        ab: [(u64, u64); n],
    };
    let ans = ab
        .iter()
        .enumerate()
        .sorted_by(|(_, (al, bl)), (_, (ar, br))| (ar * (al + bl)).cmp(&(al * (ar + br))))
        .map(|(i, _)| i + 1)
        .join(" ");
    println!("{ans}");
}
