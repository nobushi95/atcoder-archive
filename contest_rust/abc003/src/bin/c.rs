use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        k: usize,
        r: [i64; n],
    };
    let ans = r.iter().sorted().collect_vec()[(n - k)..]
        .iter()
        .map(|&&x| x as f64)
        .scan(0_f64, |state, x| {
            *state = (*state + x) / 2.0;
            Some(*state)
        })
        .last()
        .unwrap();
    println!("{:.6}", ans);
}
