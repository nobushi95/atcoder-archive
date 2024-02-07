use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { s: Chars };
    if s.len() != 8 {
        println!("No");
        return;
    }

    let s_number = match s[1..s.len() - 1].iter().join("").parse::<i64>() {
        Ok(x) => x,
        Err(_) => {
            println!("No");
            return;
        }
    };

    let ans = if s.first().unwrap().is_alphabetic()
        && s.last().unwrap().is_alphabetic()
        && s_number >= 100000
        && s_number <= 999999
    {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
