use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    for l in 1..n {
        let mut ans = 0;
        for i in 0..n - l {
            if s[i] == s[i + l] {
                break;
            }
            ans += 1;
        }
        println!("{ans}");
    }
}
