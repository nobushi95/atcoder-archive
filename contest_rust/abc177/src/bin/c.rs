use ac_library::ModInt1000000007 as Mint;
use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [i64; n],
    };

    let a_acc = a
        .iter()
        .scan(0, |state, &x| {
            *state = *state + x;
            Some(*state)
        })
        .collect_vec();

    let ans = (1..n).fold(Mint::new(0), |acc, x| {
        acc + Mint::new(a_acc[x - 1]) * Mint::new(a[x])
    });

    println!("{ans}");
}
