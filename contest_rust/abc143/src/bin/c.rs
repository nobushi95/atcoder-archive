use proconio::{input, marker::*};

fn main() {
    input! {
        _n: i64,
        mut s: Bytes,
    };
    s.dedup();
    println!("{}", s.len());
}
