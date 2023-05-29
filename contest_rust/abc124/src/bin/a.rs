use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        mut a: i64,
        mut b: i64,
    };

    let chose = |a: &mut i64, b: &mut i64| {
        if a > b {
            let tmp = *a;
            *a -= 1;
            tmp
        } else {
            let tmp = *b;
            *b -= 1;
            tmp
        }
    };

    let mut ans = chose(&mut a, &mut b);
    ans += chose(&mut a, &mut b);
    println!("{}", ans);
}
