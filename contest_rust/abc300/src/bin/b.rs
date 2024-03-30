use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::VecDeque, iter::FromIterator};

fn shift_row(a: &mut VecDeque<VecDeque<char>>) {
    let t = a.pop_back().unwrap();
    a.push_front(t);
}

fn shift_col(a: &mut VecDeque<VecDeque<char>>) {
    for i in 0..a.len() {
        let t = a[i].pop_back().unwrap();
        a[i].push_front(t);
    }
}

fn is_same(a: &VecDeque<VecDeque<char>>, b: &Vec<Vec<char>>) -> bool {
    for i in 0..a.len() {
        for j in 0..a[i].len() {
            if a[i][j] != b[i][j] {
                return false;
            }
        }
    }

    true
}

fn main() {
    input! {
        h: usize, w: usize,
        a: [Chars; h],
        b: [Chars; h],
    };
    let mut a = VecDeque::from_iter(a.iter().map(|x| VecDeque::from(x.clone())));

    if is_same(&a, &b) {
        println!("Yes");
        return;
    }

    for _ in 0..h {
        shift_row(&mut a);
        for _ in 0..w {
            shift_col(&mut a);

            if is_same(&a, &b) {
                println!("Yes");
                return;
            }
        }
    }

    println!("No");
}
