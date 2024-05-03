use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    let mut is_a_ok = false;
    let mut is_b_ok = false;
    let mut is_c_ok = false;
    for i in 0..n {
        if is_a_ok && is_b_ok && is_c_ok {
            println!("{}", i);
            return;
        }

        match s[i] {
            'A' => is_a_ok = true,
            'B' => is_b_ok = true,
            'C' => is_c_ok = true,
            _ => {}
        };
    }
    println!("{n}");
}
