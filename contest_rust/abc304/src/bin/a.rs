use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        sa: [(String, usize); n],
    };
    let min_age_pos = sa.iter().position_min_by(|x, y| x.1.cmp(&y.1)).unwrap();
    for i in 0..n {
        let idx = (min_age_pos + i) % n;
        println!("{}", sa[idx].0);
    }
}
