use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
        t: Chars,
    };
    for (i, (si, ti)) in s.iter().zip(t.iter()).enumerate() {
        if si != ti {
            println!("{}", i + 1);
            return;
        }
    }
    println!("{}", t.len());
}
