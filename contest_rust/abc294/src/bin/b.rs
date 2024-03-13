use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        h: usize, w: usize,
        a: [[u8; w]; h],
    };
    let ans = a
        .iter()
        .map(|x| {
            x.iter()
                .map(|&x| if x == 0 { '.' } else { (b'A' + x - 1) as char })
                .join("")
        })
        .join("\n");
    println!("{ans}");
}
