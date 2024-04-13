use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        p: char, q: char,
    };
    let distance = [0, 3, 1, 4, 1, 5, 9];
    let pos = distance
        .iter()
        .scan(0, |state, &x| {
            *state += x;
            Some(*state)
        })
        .collect_vec();
    let right = (p.max(q) as u8 - b'A') as usize;
    let left = (p.min(q) as u8 - b'A') as usize;
    let ans = pos[right] - pos[left];
    println!("{ans}");
}
