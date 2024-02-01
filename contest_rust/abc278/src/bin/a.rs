use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::VecDeque};

fn main() {
    input! {
        n: usize, k: usize,
        a: [usize; n],
    };
    let mut a = a.iter().collect::<VecDeque<_>>();
    for _ in 0..k {
        a.pop_front();
        a.push_back(&0);
    }
    let ans = a.iter().join(" ");
    println!("{ans}");
}
