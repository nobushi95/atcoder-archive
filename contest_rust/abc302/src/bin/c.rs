use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        s: [String; n],
    };
    let perm = s.iter().permutations(n);

    for p in perm {
        if p.windows(2).all(|x| {
            x[0].chars()
                .zip(x[1].chars())
                .filter(|(l, r)| l != r)
                .count()
                == 1
        }) {
            println!("Yes");
            return;
        }
    }

    println!("No");
}
