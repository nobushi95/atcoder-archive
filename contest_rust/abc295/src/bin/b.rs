use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        r: i32, c: i32,
        mut b: [Chars; r],
    };
    for i in 0..r {
        for j in 0..c {
            match b[i as usize][j as usize].to_string().parse::<i32>() {
                Ok(n) => {
                    b[i as usize][j as usize] = '.';
                    for k in max(i - n, 0)..min(i + n + 1, r) {
                        for l in max(j - n, 0)..min(j + n + 1, c) {
                            if (k as i32 - i as i32).abs() + (l as i32 - j as i32).abs() <= n as i32
                                && b[k as usize][l as usize]
                                    .to_string()
                                    .parse::<i32>()
                                    .is_err()
                            {
                                b[k as usize][l as usize] = '.';
                            }
                        }
                    }
                }
                _ => {}
            };
        }
    }
    let ans = b.iter().map(|x| x.iter().join("")).join("\n");
    println!("{ans}");
}
