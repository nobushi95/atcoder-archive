use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        b: Chars
    };

    let ans = b
        .iter()
        .map(|&x| match x {
            'A' => 'T',
            'T' => 'A',
            'C' => 'G',
            'G' => 'C',
            _ => unreachable!(),
        })
        .join("");
    println!("{}", ans);
}
