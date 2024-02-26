use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, k: usize,
        s: [String; n],
    };
    let mut ans = s[0..k].into_iter().collect_vec();
    ans.sort();
    for a in ans {
        println!("{a}");
    }
}
