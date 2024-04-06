use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        a: [[usize; n]; m],
    };
    let mut tbl = vec![vec![false; n]; n];
    a.iter().for_each(|x| {
        x.windows(2).for_each(|y| {
            tbl[y[0] - 1][y[1] - 1] = true;
            tbl[y[1] - 1][y[0] - 1] = true;
        });
    });
    let mut ans = 0;
    for i in 0..n {
        for j in (i + 1)..n {
            if !tbl[i][j] {
                ans += 1;
            }
        }
    }
    println!("{ans}");
}
