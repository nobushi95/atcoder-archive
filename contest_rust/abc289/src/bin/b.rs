use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        a: [usize; m],
    };
    let mut v = Vec::new();
    let mut stack = Vec::new();

    for i in 1..n + 1 {
        if a.contains(&i) {
            stack.push(i);
        } else {
            v.push(i);
            while !stack.is_empty() {
                v.push(stack.pop().unwrap());
            }
        }
    }

    let ans = v.iter().join(" ");
    println!("{ans}");
}
