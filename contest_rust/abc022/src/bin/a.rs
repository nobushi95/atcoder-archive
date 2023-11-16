use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::VecDeque};

fn main() {
    input! {
        n: i64,
        s: i64,
        t: i64,
        w: i64,
        aa: [i64; n - 1],
    };
    let mut a = aa.iter().collect::<VecDeque<&i64>>();
    a.push_front(&0);
    let ans = a
        .iter()
        .scan(w, |state, &x| {
            *state = *state + x;
            Some(*state)
        })
        .filter(|&x| x >= s && x <= t)
        .count();
    println!("{ans}");
}
