use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! {
        s: String,
    };
    let mut ans = 1;
    for i in 0..s.len() - 1 {
        for j in i + 1..s.len() {
            let sub = String::from(&s[i..=j]);
            if sub == sub.chars().rev().join("") {
                ans = ans.max(sub.len());
            }
        }
    }
    println!("{ans}");
}
