use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        t: i64,
        n: usize,
        a: [i64; n],
        m: usize,
        b: [i64; m],
    };
    if n < m {
        println!("no");
        return;
    }

    let mut tbl = vec![(0, true); n];
    a.iter().enumerate().for_each(|(i, &x)| tbl[i].0 = x);

    for bi in b {
        let mut is_found = false;

        for j in 0..n {
            let d = bi - tbl[j].0;
            if tbl[j].1 && d >= 0 && d <= t {
                is_found = true;
                tbl[j].1 = false;
                break;
            }
        }

        if !is_found {
            println!("no");
            return;
        }
    }

    println!("yes");
}
