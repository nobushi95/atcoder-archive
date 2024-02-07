use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, t:i64,
        a: [i64; n],
    };
    let mut t = t % a.iter().sum::<i64>();
    for (i, ai) in a.iter().enumerate() {
        let remain = t;
        t -= ai;
        if t < 0 {
            println!("{} {remain}", i + 1);
            return;
        }
    }
}
