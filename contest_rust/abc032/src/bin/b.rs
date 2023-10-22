use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
        k: usize,
    };
    let ans = s.windows(k).map(|x| x.iter().join("")).unique().count();
    println!("{}", ans);
}
