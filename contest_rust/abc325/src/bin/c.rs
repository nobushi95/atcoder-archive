use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! {
        h: usize, w: usize,
        s: [Chars; h],
    };
    let mut used = vec![vec![false; w]; h];

    let d: Vec<(i32, i32)> = vec![
        (1, 0),
        (0, 1),
        (-1, 0),
        (0, -1),
        (1, 1),
        (1, -1),
        (-1, -1),
        (-1, 1),
    ];

    let mut ans = 0;
    for i in 0..h {
        for j in 0..w {
            if s[i][j] == '.' || used[i][j] {
                continue;
            }

            let mut q = VecDeque::new();
            q.push_back((i, j));

            while !q.is_empty() {
                let p = q.pop_front().unwrap();
                for (dx, dy) in &d {
                    let nx = p.0 as i32 + dx;
                    let ny = p.1 as i32 + dy;
                    if !(0 <= nx && nx < h as i32 && 0 <= ny && ny < w as i32) {
                        continue;
                    }

                    let nx = nx as usize;
                    let ny = ny as usize;

                    if s[nx][ny] == '#' && !used[nx][ny] {
                        used[nx][ny] = true;
                        q.push_back((nx, ny));
                    }
                }
            }
            ans += 1;
        }
    }

    println!("{ans}");
}
