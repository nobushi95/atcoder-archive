use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        n: usize, x: i64,
        a: [i64; n],
    };
    let a = a.iter().collect::<HashSet<_>>();
    for ai in &a {
        if a.contains(&(*ai + x)) || a.contains(&(*ai - x)) {
            println!("Yes");
            return;
        }
    }
    println!("No");
}
