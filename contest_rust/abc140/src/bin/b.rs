use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [usize; n],
        b: [i64; n],
        c: [i64; n - 1],
    };

    let mut ans = 0;
    for i in 0..n {
        ans += b[a[i] - 1];
        if i != 0 && a[i] == a[i - 1] + 1 {
            ans += c[a[i] - 2];
        }
    }

    println!("{}", ans);
}
