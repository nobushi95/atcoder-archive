use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        m: f64,
    };
    let km = m / 1000.0;
    let ans = match km {
        _ if km < 0.1 => 0,
        _ if km >= 0.1 && km <= 5.0 => (km * 10.0) as i32,
        _ if km >= 6.0 && km <= 30.0 => (km + 50.0) as i32,
        _ if km >= 35.0 && km <= 70.0 => ((km - 30.0) / 5.0 + 80.0) as i32,
        _ => 89,
    };
    println!("{:02}", ans);
}
