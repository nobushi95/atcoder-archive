use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    let weathers = vec!["Sunny", "Cloudy", "Rainy"];
    input! {
        s: String
    };

    let idx = weathers.iter().position(|&x| x.to_string() == s).unwrap();
    let ans = weathers[(idx + 1) % 3];
    println!("{}", ans);
}
