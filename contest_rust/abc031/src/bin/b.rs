use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        l: i64,
        h: i64,
        n: usize,
        a: [i64; n],
    };
    let ans = a
        .iter()
        .map(|&x| {
            if x >= l && x <= h {
                0
            } else if x < l {
                l - x
            } else {
                -1
            }
        })
        .collect::<Vec<i64>>();
    ans.iter().for_each(|x| println!("{}", x));
}
