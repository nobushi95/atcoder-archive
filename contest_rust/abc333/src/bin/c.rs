use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { mut n: u64 };

    for d in 1..=12 {
        for a in (0..=(d - 1)).rev() {
            for b in (0..=(d - a - 1)).rev() {
                let c = d - a - b;
                n -= 1;
                if n == 0 {
                    let ans = (0..a).map(|_| '1').join("")
                        + &(0..b).map(|_| '2').join("")
                        + &(0..c).map(|_| '3').join("");
                    println!("{ans}");
                    return;
                }
            }
        }
    }
}
