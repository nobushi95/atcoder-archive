use itertools::Itertools;
use proconio::{input, marker::*};

fn main() {
    input! {
        n: i64,
        d: [i64; n],
    }

    let ans = d
        .iter()
        .tuple_combinations()
        .map(|(x, y)| x * y)
        .sum::<i64>();
    println!("{}", ans);
}
