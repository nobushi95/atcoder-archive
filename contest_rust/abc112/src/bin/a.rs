use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: i64,
    };

    if n == 1 {
        println!("Hello World");
        return;
    }

    input! {
        a: i64,
        b: i64,
    };
    println!("{}", a + b);
}
