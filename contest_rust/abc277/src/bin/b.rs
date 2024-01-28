use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: [Chars; n],
    };
    let first_tbl = "HDCS".chars().collect_vec();
    let second_tbl = "A23456789TJQK".chars().collect_vec();
    let is_correct_string = |x: &Vec<char>| first_tbl.contains(&x[0]) && second_tbl.contains(&x[1]);
    let ans =
        if s.iter().all(|x| is_correct_string(x)) && s.len() == s.iter().sorted().dedup().count() {
            "Yes"
        } else {
            "No"
        };
    println!("{ans}");
}
