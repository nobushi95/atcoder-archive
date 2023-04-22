use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };

    let ans = (1..=n).filter(|x| x.to_string().len() % 2 != 0).count();
    println!("{}", ans);
}
