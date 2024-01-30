use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { mut h:usize, mut m: usize };
    let is_in_24_hours = |h: usize, m: usize| h <= 23 && m <= 59;
    let is_mis_judged = |h: usize, m: usize| {
        let (a, b) = (h / 10, h % 10);
        let (c, d) = (m / 10, m % 10);
        is_in_24_hours(a * 10 + c, b * 10 + d)
    };
    while !is_mis_judged(h, m) {
        m += 1;
        if m == 60 {
            h += 1;
            m = 0;
        }
        if h == 24 {
            h = 0;
        }
    }
    println!("{h} {m}");
}
