use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, iter::FromIterator};

fn main() {
    input! {
        s: Chars,
    };
    let ans = if s
        .into_iter()
        .permutations(3)
        .any(|x| x.iter().collect::<String>() == "abc")
    {
        "Yes"
    } else {
        "No"
    };
    println!("{}", ans);
}
