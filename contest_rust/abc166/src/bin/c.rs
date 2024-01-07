use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        n: usize, m: usize,
        h: [usize; n],
        ab: [(usize, usize); m],
    }
    let mut tbl = vec![HashSet::new(); n];
    ab.iter().for_each(|(a, b)| {
        tbl[a - 1].insert(b - 1);
        tbl[b - 1].insert(a - 1);
    });

    let mut ans = 0;
    for i in 0..n {
        let mut is_ok = true;
        for another in &tbl[i] {
            if h[i] <= h[*another] {
                is_ok = false;
            }
        }
        if is_ok {
            ans += 1;
        }
    }

    println!("{ans}");
}
