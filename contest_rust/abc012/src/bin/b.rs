use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };
    let hour = n / 3600;
    let minute = (n % 3600) / 60;
    let seconds = n % 60;
    println!("{hour:02}:{minute:02}:{seconds:02}");
}
