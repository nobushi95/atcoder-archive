use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        n: u64, s: u64, m: u64, l: u64
    };

    let mut ans = u64::MAX;
    for s_num in 0..=100 {
        for m_num in 0..=100 {
            for l_num in 0..=100 {
                if s_num * 6 + m_num * 8 + l_num * 12 >= n {
                    ans = ans.min(s * s_num + m * m_num + l * l_num);
                }
            }
        }
    }
    println!("{ans}");
}
