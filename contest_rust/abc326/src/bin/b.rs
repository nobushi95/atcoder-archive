use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! { mut n: u64, };

    loop {
        let a = n / 100;
        let b = (n / 10) % 10;
        let c = n % 10;
        if a * b == c {
            println!("{n}");
            return;
        }
        n += 1;
    }
}
