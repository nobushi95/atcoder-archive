use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        n: usize, m: usize,
    }

    let mut aa = Vec::new();
    for _ in 0..m {
        input! {
            c: usize,
            a: [usize; c],
        };
        aa.push(a);
    }

    let mut ans = 0;
    for b in 0..1 << m {
        let mut s = HashSet::new();
        for i in 0..m {
            if (b >> i) & 1 != 0 {
                aa[i].iter().for_each(|&x| {
                    s.insert(x);
                });
            }
        }
        if s.len() == n {
            ans += 1;
        }
    }
    println!("{ans}");
}
