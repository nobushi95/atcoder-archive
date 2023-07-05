use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: Chars,
    };
    let ans = if n.iter().join("").parse::<i64>().unwrap()
        % n.iter()
            .map(|&x| x.to_digit(10).unwrap() as i64)
            .sum::<i64>()
        == 0
    {
        "Yes"
    } else {
        "No"
    };
    println!("{}", ans);
}
