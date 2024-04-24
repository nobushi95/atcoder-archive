use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, vec};

fn main() {
    input! {
        n: usize,
        a: [Chars; n],
    };
    let mut b = a.clone();
    for j in 1..n {
        b[0][j] = a[0][j - 1];
        b[j][n - 1] = a[j - 1][n - 1];
        b[n - 1][n - 1 - j] = a[n - 1][n - j];
        b[n - 1 - j][0] = a[n - j][0];
    }
    let ans = b.iter().map(|x| x.iter().join("")).join("\n");
    println!("{ans}");
}
