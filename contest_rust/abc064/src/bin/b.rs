use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input!{
        n: i64,
        mut a: [i64; n],
    }
    a.sort();
    let ans = a.windows(2).map(|x| x[1] - x[0]).sum::<i64>();
    println!("{}", ans);
}
