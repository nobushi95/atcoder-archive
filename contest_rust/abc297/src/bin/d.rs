use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, mem::swap};

fn main() {
    input! {
        mut a: i64, mut b: i64,
    };
    let mut ans = 0_i64;
    if a < b {
        swap(&mut a, &mut b);
    }
    while b > 0 {
        ans += a / b;
        a %= b;
        swap(&mut a, &mut b);
    }
    ans -= 1;
    println!("{ans}");
}
