use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, vec};

fn main() {
    input! { n:usize, m:usize };
    let mut tbl = vec![vec![false; n]; n];
    for _ in 0..m {
        input! {
            k: usize,
            x: [Usize1; k],
        };
        for i in 0..k {
            for j in i + 1..k {
                tbl[x[i]][x[j]] = true;
                tbl[x[j]][x[i]] = true;
            }
        }
    }

    for i in 0..n {
        for j in i + 1..n {
            if !tbl[i][j] {
                println!("No");
                return;
            }
        }
    }

    println!("Yes");
}
