use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
         s: Chars
    };
    let ans = format!(
        "{}{}",
        s[0].to_uppercase(),
        s.iter().skip(1).map(|x| x.to_lowercase()).join("")
    );
    println!("{ans}");
}
