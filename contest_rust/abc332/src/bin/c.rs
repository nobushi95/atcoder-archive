use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: usize, m: i64,
        mut s: Chars,
    };
    s.push('0');
    let mut ans = 0;
    let mut x = 0;
    let mut y = 0;
    for si in s {
        match si {
            '0' => {
                ans = ans.max(y.max(x + y - m));
                x = 0;
                y = 0;
            }
            '1' => {
                x += 1;
            }
            '2' => {
                y += 1;
            }
            _ => unreachable!(),
        };
    }
    println!("{ans}");
}
