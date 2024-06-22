use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
         n: usize,
         s: Chars,
    };
    let mut mx = vec![0; 26];
    let mut l = 0;
    while l < n {
        let mut r = l + 1;
        while r < n && s[l] == s[r] {
            r += 1;
        }
        let c = (s[l] as u8 - b'a') as usize;
        mx[c] = mx[c].max(r - l);
        l = r;
    }

    let ans = mx.iter().sum::<usize>();
    println!("{ans}");
}
