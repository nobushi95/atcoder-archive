use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, k: u64,
        mut ab: [(u64, u64); n],
    };
    ab.sort();
    let mut sum_medicine = ab.iter().map(|x| x.1).sum::<u64>();
    if sum_medicine <= k {
        println!("1");
        return;
    }

    for i in 0..n {
        if sum_medicine <= k {
            println!("{}", ab[i - 1].0 + 1);
            return;
        }
        sum_medicine -= ab[i].1;
    }
    println!("{}", ab.last().unwrap().0 + 1);
}
