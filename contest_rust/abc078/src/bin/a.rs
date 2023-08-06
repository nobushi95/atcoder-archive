use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        x: char,
        y: char,
    };
    let ans = match x.cmp(&y) {
        Ordering::Equal => "=",
        Ordering::Greater => ">",
        Ordering::Less => "<",
    };
    println!("{}", ans);
}
