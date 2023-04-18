use itertools::Itertools;
use proconio::{input, marker::*};

fn main() {
    input! {
        a: i64,
        s: String,
    };

    let ans = if a < 3200 { "red" } else { &s };
    println!("{}", ans);
}
