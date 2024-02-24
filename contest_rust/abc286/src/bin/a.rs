use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, p: Usize1, q: Usize1, r: Usize1, s: Usize1,
        a: [usize; n],
    };
    let mut v = Vec::<usize>::new();
    v.extend(a[0..p].iter());
    v.extend(a[r..=s].iter());
    v.extend(a[q + 1..r].iter());
    v.extend(a[p..=q].iter());
    v.extend(a[s + 1..n].iter());
    let ans = v.iter().join(" ");
    println!("{ans}");
}
