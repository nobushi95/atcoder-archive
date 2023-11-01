use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashMap};

fn main() {
    input! {
        s: Chars,
    };
    let mut tbl = HashMap::new();
    s.iter().for_each(|&x| *tbl.entry(x).or_insert(0) += 1);

    for c in vec!['A', 'B', 'C', 'D', 'E', 'F'] {
        let ans = match tbl.get(&c) {
            Some(v) => *v,
            None => 0,
        };
        if c != 'F' {
            print!("{} ", ans)
        } else {
            print!("{}", ans)
        }
    }
    println!("");
}
