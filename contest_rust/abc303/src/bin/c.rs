use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! {
        n: usize, m: usize, mut h: i64, k: i64,
        s: Chars,
        xy: [(i64, i64); m],
    };
    let mut heal_point = xy.iter().collect::<HashSet<_>>();
    let mut pos = (0_i64, 0_i64);
    for c in s {
        match c {
            'R' => pos.0 += 1,
            'L' => pos.0 -= 1,
            'U' => pos.1 += 1,
            'D' => pos.1 -= 1,
            _ => unreachable!(),
        };
        h -= 1;
        if h < 0 {
            println!("No");
            return;
        }
        if heal_point.contains(&pos) && h < k {
            heal_point.remove(&pos);
            h = k;
        }
    }

    println!("Yes");
}
