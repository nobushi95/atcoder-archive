use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, d: usize,
        s: [Chars; n],
    };

    let mut ans = 0;
    for i in 0..d {
        let mut cur = 0;
        for j in i..d {
            if s.iter().all(|x| x[j] == 'o') {
                cur += 1;
            } else {
                break;
            }
        }
        ans = ans.max(cur);
    }

    println!("{ans}");
}
