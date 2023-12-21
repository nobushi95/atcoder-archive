use ac_library::ModInt as Mint;
use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
    };
    Mint::set_modulus(10007);
    let mut dp = vec![Mint::new(0); n.max(3)];
    dp[2] = Mint::new(1);
    for i in 3..n {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    println!("{}", dp[n - 1]);
}
