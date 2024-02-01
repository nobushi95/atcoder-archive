use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        h: usize, w: usize,
        s: [Chars; h],
        t: [Chars; h],
    };
    let mut st = vec![vec![]; w];
    let mut tt = vec![vec![]; w];
    for i in 0..h {
        for j in 0..w {
            st[j].push(s[i][j]);
            tt[j].push(t[i][j]);
        }
    }

    let mut st = st.iter().map(|x| x.iter().join("")).collect_vec();
    let mut tt = tt.iter().map(|x| x.iter().join("")).collect_vec();

    st.sort();
    tt.sort();

    let ans = if st == tt { "Yes" } else { "No" };
    println!("{ans}");
}
