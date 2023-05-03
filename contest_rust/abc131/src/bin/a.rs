use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Bytes,
    };

    let cnt = s.windows(2).filter(|x| x[0] == x[1]).count();
    let ans = if cnt == 0 { "Good" } else { "Bad" };
    println!("{}", ans);
}
