use proconio::{input, marker::*};

fn main() {
    input! {
        a: i64,
        b: i64
    };

    let ans = match (a, b) {
        (1..=9, 1..=9) => a * b,
        _ => -1,
    };
    println!("{}", ans);
}
