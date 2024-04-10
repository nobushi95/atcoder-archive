use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::VecDeque};

fn main() {
    input! {
        n: usize, d: i64,
        xy: [(i64, i64); n],
    };
    let mut graph = vec![vec![false; n]; n];
    for i in 0..n {
        for j in i + 1..n {
            let d1 = xy[i].0 - xy[j].0;
            let d2 = xy[i].1 - xy[j].1;
            if d1 * d1 + d2 * d2 <= d * d {
                graph[i][j] = true;
                graph[j][i] = true;
            }
        }
    }

    let mut ans = vec![false; n];
    ans[0] = true;
    let mut que = VecDeque::new();
    que.push_back(0);
    while !que.is_empty() {
        let cur = que.pop_front().unwrap();
        for i in 0..n {
            if graph[cur][i] && !ans[i] {
                ans[i] = true;
                que.push_back(i);
            }
        }
    }
    let ans = ans.iter().map(|&x| if x { "Yes" } else { "No" }).join("\n");
    println!("{ans}");
}
