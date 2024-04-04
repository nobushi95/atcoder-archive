use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        h: usize, w: usize,
        s: [Chars; h],
    };

    let snuke = "snuke".chars().collect_vec();
    let snuke_rev = "snuke".chars().rev().collect_vec();

    for i in 0..h {
        for j in 0..w {
            if i + 4 < h {
                let ans = if (0..5_usize).all(|k| s[i + k][j] == snuke[k]) {
                    Some(
                        (0..5_usize)
                            .map(|k| format!("{} {}", i + k + 1, j + 1))
                            .join("\n"),
                    )
                } else if (0..5_usize).all(|k| s[i + k][j] == snuke_rev[k]) {
                    Some(
                        (0..5_usize)
                            .rev()
                            .map(|k| format!("{} {}", i + k + 1, j + 1))
                            .join("\n"),
                    )
                } else {
                    None
                };

                match ans {
                    Some(x) => {
                        println!("{x}");
                        return;
                    }
                    None => {}
                }
            }

            if j + 4 < w {
                let ans = if (0..5_usize).all(|l| s[i][j + l] == snuke[l]) {
                    Some(
                        (0..5_usize)
                            .map(|l| format!("{} {}", i + 1, j + l + 1))
                            .join("\n"),
                    )
                } else if (0..5_usize).all(|l| s[i][j + l] == snuke_rev[l]) {
                    Some(
                        (0..5_usize)
                            .rev()
                            .map(|l| format!("{} {}", i + 1, j + l + 1))
                            .join("\n"),
                    )
                } else {
                    None
                };

                match ans {
                    Some(x) => {
                        println!("{x}");
                        return;
                    }
                    None => {}
                }
            }
            if i + 4 < h && j + 4 < w {
                let ans = if (0..5_usize).all(|x| s[i + x][j + x] == snuke[x]) {
                    Some(
                        (0..5_usize)
                            .map(|x| format!("{} {}", i + x + 1, j + x + 1))
                            .join("\n"),
                    )
                } else if (0..5_usize).all(|x| s[i + x][j + x] == snuke_rev[x]) {
                    Some(
                        (0..5_usize)
                            .rev()
                            .map(|x| format!("{} {}", i + x + 1, j + x + 1))
                            .join("\n"),
                    )
                } else {
                    None
                };

                match ans {
                    Some(x) => {
                        println!("{x}");
                        return;
                    }
                    None => {}
                }
            }
            if i + 4 < h && j as i64 - 4 >= 0 {
                let ans = if (0..5_usize).all(|x| s[i + x][j - x] == snuke[x]) {
                    Some(
                        (0..5_usize)
                            .map(|x| format!("{} {}", i + x + 1, j - x + 1))
                            .join("\n"),
                    )
                } else if (0..5_usize).all(|x| s[i + x][j - x] == snuke_rev[x]) {
                    Some(
                        (0..5_usize)
                            .rev()
                            .map(|x| format!("{} {}", i + x + 1, j - x + 1))
                            .join("\n"),
                    )
                } else {
                    None
                };

                match ans {
                    Some(x) => {
                        println!("{x}");
                        return;
                    }
                    None => {}
                }
            }
        }
    }
}
