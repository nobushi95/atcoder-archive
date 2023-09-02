use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;
use std::collections::HashMap;

fn main() {
    input! {
        x: i32,
        y: i32,
    };
    let a = vec![1, 3, 5, 7, 8, 10, 12];
    let b = vec![4, 6, 9, 11];
    let c = vec![2];
    let mut g = HashMap::new();
    a.iter().for_each(|x| {
        g.insert(x, 0);
    });
    b.iter().for_each(|x| {
        g.insert(x, 1);
    });
    c.iter().for_each(|x| {
        g.insert(x, 2);
    });
    let ans = if g.get(&x) == g.get(&y) { "Yes" } else { "No" };
    println!("{}", ans);
}
