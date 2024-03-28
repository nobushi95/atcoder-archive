use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    let mut count = 0;
    let mut tmp = 0;
    for &si in s.iter() {
        if si == 'o' {
            tmp += 1;
        } else {
            count = count.max(tmp);
            tmp = 0;
        }
    }
    tmp = 0;
    for &si in s.iter().rev() {
        if si == 'o' {
            tmp += 1;
        } else {
            count = count.max(tmp);
            tmp = 0;
        }
    }

    let ans = if count == 0 { -1 } else { count };
    println!("{ans}");
}
