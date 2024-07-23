use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { mut n: i64 };

    n -= 1;

    let mut ans = vec![];

    while n > 0 {
        ans.push(n % 5 * 2);
        n /= 5;
    }

    if ans.is_empty() {
        ans.push(0);
    }

    let ans = ans.iter().rev().join("");

    println!("{ans}");
}
