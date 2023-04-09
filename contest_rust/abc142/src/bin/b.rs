use proconio::{input, marker::*};

fn main() {
    input! {
        n: i64,
        k: i64,
        h: [i64; n]
    };
    let ans = h.iter().filter(|&x| *x >= k).count();
    println!("{}", ans);
}
