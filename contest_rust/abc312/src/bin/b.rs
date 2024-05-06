use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        s: [Chars; n],
    };
    let is_tak_code = |x: usize, y: usize| {
        for i in x..x + 4 {
            for j in y..y + 4 {
                if i == x + 3 {
                    if s[i][j] != '.' {
                        return false;
                    }
                    continue;
                }

                if j == y + 3 {
                    if s[i][j] != '.' {
                        return false;
                    }
                    continue;
                }

                if s[i][j] != '#' {
                    return false;
                }
            }
        }

        for i in x + 5..x + 9 {
            for j in y + 5..y + 9 {
                if i == x + 5 {
                    if s[i][j] != '.' {
                        return false;
                    }
                    continue;
                }

                if j == y + 5 {
                    if s[i][j] != '.' {
                        return false;
                    }
                    continue;
                }

                if s[i][j] != '#' {
                    return false;
                }
            }
        }

        true
    };

    let mut ans = vec![];
    for i in 0..n - 8 {
        for j in 0..m - 8 {
            if is_tak_code(i, j) {
                ans.push((i + 1, j + 1));
            }
        }
    }
    if ans.len() == 0 {
        return;
    }
    let ans = ans.iter().map(|(x, y)| format!("{x} {y}")).join("\n");
    println!("{ans}");
}
