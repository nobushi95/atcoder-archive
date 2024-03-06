use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashMap};

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    let mut cur = (0, 0);
    let mut tbl = HashMap::new();
    tbl.insert(cur, 1);
    for c in s {
        cur = match c {
            'R' => (cur.0 + 1, cur.1),
            'L' => (cur.0 - 1, cur.1),
            'U' => (cur.0, cur.1 + 1),
            'D' => (cur.0, cur.1 - 1),
            _ => unreachable!(),
        };
        *tbl.entry(cur).or_insert(0) += 1;
    }
    let ans = if tbl.iter().any(|(_, &x)| x > 1) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
