use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: [i64; n],
    };
    let mut ans = Vec::new();
    ans.push(s[0]);

    for i in 1..n {
        ans.push(s[i] - s[i - 1]);
    }

    let ans = ans.iter().join(" ");
    println!("{ans}");
}
