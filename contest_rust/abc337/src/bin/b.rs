use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet, VecDeque},
};
use superslice::*;

fn main() {
    input! { s: String };

    let n = s.len();
    for a in 0..=n {
        for b in 0..=n - a {
            let c = n - a - b;
            let a_str = (0..a).map(|_| 'A').join("");
            let b_str = (0..b).map(|_| 'B').join("");
            let c_str = (0..c).map(|_| 'C').join("");
            let cur = format!("{}{}{}", a_str, b_str, c_str);
            if s == cur {
                println!("Yes");
                return;
            }
        }
    }

    println!("No");
}
