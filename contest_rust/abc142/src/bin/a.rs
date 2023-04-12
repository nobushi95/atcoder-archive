use proconio::{input, marker::*};

fn main() {
    input! {
        n: i64,
    };
    let ans = ((n / 2) + n % 2) as f64 / (n as f64);
    println!("{:.7}", ans);
}
