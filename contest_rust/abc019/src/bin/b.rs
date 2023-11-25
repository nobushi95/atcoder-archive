use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
    };
    let mut ans = s.iter().map(|x| (x, 1)).collect_vec();
    ans.dedup_by(|a, b| {
        a.0 == b.0 && {
            b.1 += a.1;
            true
        }
    });
    ans.iter().for_each(|x| print!("{}{}", x.0, x.1));
    println!();
}
