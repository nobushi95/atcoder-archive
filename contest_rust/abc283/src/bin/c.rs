use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! { mut s: Chars };
    let mut ans = s.len();
    for i in 0..s.len() - 1 {
        if s[i] == '0' && s[i + 1] == '0' {
            s[i + 1] = 'a';
            ans -= 1;
        }
    }

    println!("{ans}");
}
