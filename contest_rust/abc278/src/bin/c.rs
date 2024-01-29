use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! { n: usize, q: usize };

    let mut tbl = HashSet::<(usize, usize)>::new();

    for _ in 0..q {
        input! { t:usize, a: usize, b:usize };

        match t {
            1 => {
                tbl.insert((a, b));
            }
            2 => {
                tbl.remove(&(a, b));
            }
            _ => {
                let ans = if tbl.contains(&(a, b)) && tbl.contains(&(b, a)) {
                    "Yes"
                } else {
                    "No"
                };
                println!("{ans}");
            }
        }
    }
}
