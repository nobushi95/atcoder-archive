use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { t: usize };
    for _ in 0..t {
        input! {
            n: usize,
            a: [usize; n],
        };
        let ans = a.iter().filter(|&x| x % 2 == 1).count();
        println!("{ans}");
    }
}
