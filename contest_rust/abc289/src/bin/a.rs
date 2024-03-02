use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
    };
    let ans = s
        .iter()
        .map(|x| match x {
            '0' => '1',
            '1' => '0',
            _ => unreachable!(),
        })
        .join("");
    println!("{ans}");
}
