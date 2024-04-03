use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: Chars,
    };
    let t = s.iter().filter(|&x| *x == 'T').count();
    let a = s.iter().filter(|&x| *x == 'A').count();

    let ans = if t > a {
        "T"
    } else if t < a {
        "A"
    } else {
        let t_pos = s.iter().positions(|&x| x == 'T');
        let a_pos = s.iter().positions(|&x| x == 'A');
        let t_last = t_pos.last().unwrap();
        let a_last = a_pos.last().unwrap();
        if t_last < a_last {
            "T"
        } else {
            "A"
        }
    };
    println!("{ans}");
}
