use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! { n: usize, m: usize };
    let mut p = vec![];
    let mut c = vec![];
    let mut f = vec![];
    for _ in 0..n {
        input! { pi: u64, ci: u64, fi: [u64; ci] };
        p.push(pi);
        c.push(ci);
        f.push(fi.iter().cloned().collect::<HashSet<_>>());
    }

    for i in 0..n {
        for j in 0..n {
            if i == j {
                continue;
            }

            if !(p[i] >= p[j]) {
                continue;
            }

            if !f[i].iter().all(|x| f[j].contains(x)) {
                continue;
            }

            if !(p[i] > p[j] || c[i] < c[j]) {
                continue;
            }

            println!("Yes");
            return;
        }
    }

    println!("No");
}
