use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        q: i64,
        lrt: [(usize, usize, i64); q],
    }
    let mut ans = vec![0_i64; n];
    lrt.iter().for_each(|(l, r, t)| ans[(l - 1)..*r].fill(*t));
    ans.iter().for_each(|x| println!("{}", x));
}
