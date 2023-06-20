use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: Chars
    };
    let ans = n
        .iter()
        .map(|c| match *c {
            '1' => '9',
            '9' => '1',
            _ => unreachable!(),
        })
        .join("");
    println!("{}", ans);
}
