use itertools::Itertools;
use num_traits::abs_sub;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let ans = (n..=999).filter(|x| x % 111 == 0).next().unwrap();
    println!("{}", ans);
}
