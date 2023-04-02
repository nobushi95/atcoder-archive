use proconio::{input, marker::*};

fn main() {
    input! {
        N: usize,
        S: Bytes,
    };
    let ans = if N % 2 == 0 && (S[0..(S.len() / 2)]) == (S[(S.len() / 2)..S.len()]) {
        "Yes"
    } else {
        "No"
    };
    println!("{}", ans);
}
