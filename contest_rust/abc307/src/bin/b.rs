use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: [String; n],
    };
    for i in 0..n {
        for j in 0..n {
            if i == j {
                continue;
            }

            let cur = format!("{}{}", s[i], s[j]);
            let cur_rev = cur.chars().rev().join("");
            if cur == cur_rev {
                println!("Yes");
                return;
            }
        }
    }
    println!("No");
}
