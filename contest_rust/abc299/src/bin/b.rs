use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn solve(c: &Vec<usize>, r: &Vec<usize>, color: usize) -> usize {
    let color_t_positions = c.iter().positions(|&x| x == color).collect::<HashSet<_>>();
    r.iter()
        .enumerate()
        .filter(|(i, _)| color_t_positions.contains(i))
        .max_by(|x, y| x.1.cmp(&y.1))
        .unwrap()
        .0
        + 1
}

fn main() {
    input! {
        n: usize, t: usize,
        c: [usize; n],
        r: [usize; n],
    };

    let ans = if c.iter().any(|&x| x == t) {
        solve(&c, &r, t)
    } else {
        solve(&c, &r, *c.first().unwrap())
    };

    println!("{ans}");
}
