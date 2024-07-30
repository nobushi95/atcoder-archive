use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
    panic::AssertUnwindSafe,
};
use superslice::*;

fn main() {
    input! { h: usize, w: usize, n: i64 };

    let dx = vec![0, 1, 0, -1];
    let dy = vec![-1, 0, 1, 0];

    let mut ans = vec![vec!['.'; w]; h];
    let mut x = 0;
    let mut y = 0;
    let mut m = 0;

    for _ in 0..n {
        if ans[y as usize][x as usize] == '.' {
            ans[y as usize][x as usize] = '#';
            m += 1;
        } else {
            ans[y as usize][x as usize] = '.';
            m += 3;
        }
        m %= 4;
        x += dx[m];
        y += dy[m];
        if x < 0 {
            x += w as i32;
        }
        if x >= w as i32 {
            x -= w as i32;
        }
        if y < 0 {
            y += h as i32;
        }
        if y >= h as i32 {
            y -= h as i32;
        }
    }
    let ans = ans.iter().map(|x| x.iter().join("")).join("\n");
    println!("{ans}");
}
