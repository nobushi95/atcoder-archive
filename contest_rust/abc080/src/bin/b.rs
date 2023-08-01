use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn f(mut x: i64) -> i64 {
    let mut ans = 0;
    while x > 0 {
        ans += x % 10;
        x /= 10;
    }
    ans
}

fn main() {
    input! {
        n: i64,
    };
    let ans = if n % f(n) == 0 { "Yes" } else { "No" };
    println!("{}", ans);
}
