use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: [Chars; 12],
    };
    let ans = s.iter().filter(|x| x.contains(&'r')).count();
    println!("{}", ans);
}
