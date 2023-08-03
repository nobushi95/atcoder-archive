use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: Chars
    };
    let ans = if n.windows(3).any(|x| x[0] == x[1] && x[0] == x[2]) {
        "Yes"
    } else {
        "No"
    };
    println!("{}", ans);
}
