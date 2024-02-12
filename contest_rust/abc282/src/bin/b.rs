use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        s: [Chars; n],
    };

    let mut ans = 0;
    for i in 0..n - 1 {
        for j in i + 1..n {
            if s[i]
                .iter()
                .zip(s[j].iter())
                .all(|(&a, &b)| a == 'o' || b == 'o')
            {
                ans += 1;
            }
        }
    }
    println!("{ans}");
}
