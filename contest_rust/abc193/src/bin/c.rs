use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashSet};

fn main() {
    input! { n: usize };
    let mut s = HashSet::new();
    for a in (2_usize..).take_while(|&i| i.pow(2) <= n) {
        let mut x = a.pow(2);
        while x <= n {
            s.insert(x);
            x *= a;
        }
    }
    let ans = n - s.len();
    println!("{ans}");
}
