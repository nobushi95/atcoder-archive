use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn is_ok(v: Vec<i64>) -> bool {
    v.iter().sorted().zip(1..=9).all(|x| *x.0 == x.1)
}

fn main() {
    input! { a: [[i64; 9]; 9], };

    let mut is_line_ok = true;
    for i in 0..9 {
        let mut v = vec![];
        for j in 0..9 {
            v.push(a[i][j]);
        }
        if !is_ok(v) {
            is_line_ok = false;
            break;
        }
    }

    let mut is_row_ok = true;
    for i in 0..9 {
        let mut v = vec![];
        for j in 0..9 {
            v.push(a[j][i]);
        }
        if !is_ok(v) {
            is_row_ok = false;
            break;
        }
    }

    let mut is_block_ok = true;
    for i in (0..9).step_by(3) {
        for j in (0..9).step_by(3) {
            let mut v = vec![];
            for k in 0..9 {
                v.push(a[i + k / 3][j + k % 3]);
            }
            if !is_ok(v) {
                is_block_ok = false;
                break;
            }
        }
    }

    let ans = if is_line_ok && is_row_ok && is_block_ok {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
