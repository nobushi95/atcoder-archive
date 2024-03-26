use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn rotate(a: &Vec<Vec<usize>>) -> Vec<Vec<usize>> {
    let n = a.len();
    let mut ret = vec![vec![0; n]; n];

    for i in 0..n {
        for j in 0..n {
            ret[j][n - 1 - i] = a[i][j];
        }
    }

    ret
}

fn is_valid(a: &Vec<Vec<usize>>, b: &Vec<Vec<usize>>) -> bool {
    let n = a.len();
    for i in 0..n {
        for j in 0..n {
            if a[i][j] == 1 && b[i][j] == 0 {
                return false;
            }
        }
    }

    true
}

fn main() {
    input! {
        n: usize,
        mut a: [[usize; n]; n],
        b: [[usize; n]; n],
    };

    for _ in 0..4 {
        if is_valid(&a, &b) {
            println!("Yes");
            return;
        }
        a = rotate(&a);
    }

    println!("No");
}
