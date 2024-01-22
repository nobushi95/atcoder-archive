use ac_library::ModInt998244353 as Mint;
use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        a: Mint,
        b: Mint,
        c: Mint,
        d: Mint,
        e: Mint,
        f: Mint,
    };
    let ans = a * b * c - d * e * f;
    println!("{ans}");
}
