use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [usize; 3 * n],
    };
    let mut tbl = vec![vec![]; n];
    a.iter()
        .enumerate()
        .for_each(|(i, &x)| tbl[x - 1].push(i + 1));

    let ans = tbl
        .iter()
        .enumerate()
        .map(|(i, x)| (i, x[1]))
        .sorted_by(|x, y| x.1.cmp(&y.1))
        .map(|x| x.0 + 1)
        .join(" ");
    println!("{ans}");
}
