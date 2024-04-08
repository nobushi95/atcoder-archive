use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
        t: Chars,
    };
    let ans = if s.iter().zip(t.iter()).all(|(&x, &y)| {
        x == y
            || (x == '1' && y == 'l')
            || (x == 'l' && y == '1')
            || (x == '0' && y == 'o')
            || (x == 'o' || y == '0')
    }) {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
