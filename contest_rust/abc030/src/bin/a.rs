use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
        d: i64,
    };
    let takahashi = b * c;
    let aoki = d * a;
    let ans = match takahashi.cmp(&aoki) {
        Ordering::Less => "AOKI",
        Ordering::Equal => "DRAW",
        Ordering::Greater => "TAKAHASHI",
    };
    println!("{}", ans);
}
