use im_rc::HashSet;
use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        s: [char; n],
    };
    let ans = if s.into_iter().collect::<HashSet<char>>().len() == 3 {
        "Three"
    } else {
        "Four"
    };
    println!("{}", ans);
}
