use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        a: [usize; n],
        b: [Usize1; m],
    };
    let ans = b.iter().map(|&x| a[x]).sum::<usize>();
    println!("{ans}");
}
