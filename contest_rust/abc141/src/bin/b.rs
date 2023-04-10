use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    let odd = vec!['R', 'U', 'D'];
    let even = vec!['L', 'U', 'D'];

    input! {
        s: Chars,
    };

    let is_odd_good = s
        .iter()
        .enumerate()
        .filter_map(|(i, &x)| if i % 2 == 0 { Some(x) } else { None })
        .all(|x| odd.contains(&x));

    let is_even_good = s
        .iter()
        .enumerate()
        .filter_map(|(i, &x)| if i % 2 == 1 { Some(x) } else { None })
        .all(|x| even.contains(&x));

    let ans = if is_even_good && is_odd_good {
        "Yes"
    } else {
        "No"
    };

    println!("{}", ans);
}
