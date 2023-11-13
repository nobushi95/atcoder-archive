use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::VecDeque};

fn main() {
    input! {
        n: i64,
        s: Chars,
    };
    let mut v = VecDeque::new();
    v.push_back('b');
    for i in 1..=(n / 2) {
        match i % 3 {
            1 => {
                v.push_front('a');
                v.push_back('c');
            }
            2 => {
                v.push_front('c');
                v.push_back('a');
            }
            0 => {
                v.push_front('b');
                v.push_back('b');
            }
            _ => unreachable!(),
        }
    }
    let ans = if s.iter().join("") == v.iter().join("") {
        n / 2
    } else {
        -1
    };
    println!("{ans}");
}
