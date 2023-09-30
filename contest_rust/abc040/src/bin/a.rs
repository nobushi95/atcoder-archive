use proconio::input;
use std::cmp::*;

fn main() {
    input! {
        n: i64,
        x: i64,
    };
    let ans = (n - x).min(x - 1);
    println!("{}", ans);
}
