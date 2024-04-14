use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, vec};

fn main() {
    input! {
        h: usize, w: usize,
        s: [Chars; h],
    };

    let is_cookie = |&x: &char| x == '#';

    let line_num = s
        .iter()
        .map(|x| x.iter().positions(is_cookie).count())
        .max()
        .unwrap();

    let mut s_trans = vec![vec![' '; h]; w];
    for i in 0..h {
        for j in 0..w {
            s_trans[j][i] = s[i][j];
        }
    }

    let row_num = s_trans
        .iter()
        .map(|x| x.iter().positions(is_cookie).count())
        .max()
        .unwrap();

    let line_positions = s
        .iter()
        .filter(|x| x.iter().positions(is_cookie).count() == line_num)
        .next()
        .unwrap()
        .iter()
        .positions(is_cookie)
        .collect_vec();

    let row_positions = s_trans
        .iter()
        .filter(|x| x.iter().positions(is_cookie).count() == row_num)
        .next()
        .unwrap()
        .iter()
        .positions(is_cookie)
        .collect_vec();

    let a = row_positions.first().unwrap().clone();
    let b = row_positions.last().unwrap().clone();
    let c = line_positions.first().unwrap().clone();
    let d = line_positions.last().unwrap().clone();

    for i in a..=b {
        for j in c..=d {
            if s[i][j] == '.' {
                println!("{} {}", i + 1, j + 1);
            }
        }
    }
}
