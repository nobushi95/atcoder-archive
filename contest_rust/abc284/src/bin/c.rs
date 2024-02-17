use ac_library::Dsu;
use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, m: usize,
        uv: [(Usize1, Usize1); m],
    };
    let mut g = Dsu::new(n);
    uv.iter().for_each(|(u, v)| {
        g.merge(*u, *v);
    });
    let ans = g.groups().len();

    println!("{ans}");
}
