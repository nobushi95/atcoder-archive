use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        c: char
    }
    let ans = match c {
        'a' | 'i' | 'u' | 'e' | 'o' => "vowel",
        _ => "consonant",
    };
    println!("{}", ans);
}
