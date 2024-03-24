use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
    };
    let b_positions = s.iter().positions(|&x| x == 'B').collect_vec();
    let is_b_ok = (b_positions.iter().min().unwrap() % 2 == 0
        && b_positions.iter().max().unwrap() % 2 == 1)
        || (b_positions.iter().min().unwrap() % 2 == 1
            && b_positions.iter().max().unwrap() % 2 == 0);
    let r_positions = s.iter().positions(|&x| x == 'R').collect_vec();
    let k_pos = s.iter().position(|&x| x == 'K').unwrap();
    let is_k_ok =
        *r_positions.iter().min().unwrap() < k_pos && k_pos < *r_positions.iter().max().unwrap();
    let ans = if is_b_ok && is_k_ok { "Yes" } else { "No" };
    println!("{ans}");
}
