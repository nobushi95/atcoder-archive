use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
        t: i64,
    };
    let x_abs = s
        .iter()
        .map(|x| match x {
            'L' => -1,
            'R' => 1,
            _ => 0,
        })
        .sum::<i64>()
        .abs();
    let y_abs = s
        .iter()
        .map(|x| match x {
            'U' => 1,
            'D' => -1,
            _ => 0,
        })
        .sum::<i64>()
        .abs();
    let k = s.iter().filter(|&x| *x == '?').count() as i64;
    let ans = if t == 1 {
        x_abs + y_abs + k
    } else {
        (s.len() as i64 % 2).max(x_abs + y_abs - k)
    };
    println!("{}", ans);
}
