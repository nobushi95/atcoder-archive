use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        a: [usize; n],
    };
    let odd = a
        .iter()
        .filter(|&x| x % 2 != 0)
        .sorted()
        .rev()
        .collect_vec();
    let even = a
        .iter()
        .filter(|&x| x % 2 == 0)
        .sorted()
        .rev()
        .collect_vec();

    if odd.len() < 2 && even.len() < 2 {
        println!("-1");
        return;
    }

    let odd_sum = if odd.len() >= 2 { odd[0] + odd[1] } else { 0 };
    let even_sum = if even.len() >= 2 {
        even[0] + even[1]
    } else {
        0
    };
    let ans = odd_sum.max(even_sum);
    println!("{ans}");
}
