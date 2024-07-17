use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { n: i64 };
    for x in 0..=n {
        for y in 0..=(n - x) {
            for z in 0..=(n - x - y) {
                println!("{x} {y} {z}");
            }
        }
    }
}
