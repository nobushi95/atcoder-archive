use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn is_chokugo(x: &Vec<char>) -> bool {
    if x.first().unwrap() == &'h' {
        return false;
    }

    if x.last().unwrap() == &'c' {
        return false;
    }

    let literal = vec!['c', 'h', 'o', 'k', 'u'];
    if !x.iter().all(|x| literal.contains(x)) {
        return false;
    }

    !x.windows(2)
        .any(|x| (x[0] == 'c' && x[1] != 'h') || (x[0] != 'c' && x[1] == 'h'))
}

fn main() {
    input! {
        x: Chars,
    };
    let ans = if is_chokugo(&x) { "YES" } else { "NO" };
    println!("{ans}");
}
