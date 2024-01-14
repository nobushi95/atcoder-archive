use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashMap};

fn main() {
    input! {
        n: usize,
        a: [i64; n],
    };
    let mut tbl = HashMap::<i64, i64>::new();
    a.iter().for_each(|&x| *tbl.entry(x).or_insert(0) += 1);

    let mut ans = 0;
    for x in &tbl {
        for y in &tbl {
            if x.0 > y.0 || x.0 == y.0 {
                continue;
            }

            ans += (y.0 - x.0) * (y.0 - x.0) * x.1 * y.1;
        }
    }

    println!("{ans}");
}
