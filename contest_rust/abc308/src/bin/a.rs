use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: [u64; 8],
    };
    let ans = if s.windows(2).all(|x| x[0] <= x[1])
        && s.iter().all(|&x| x >= 100 && x <= 675 && x % 25 == 0)
    {
        "Yes"
    } else {
        "No"
    };
    println!("{ans}");
}
