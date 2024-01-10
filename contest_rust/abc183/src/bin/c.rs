use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize, k: usize,
        t: [[usize; n]; n],
    };

    let mut ans = 0;
    for route in (1..n).permutations(n - 1) {
        let mut sum = 0;
        let mut pre_pos = 0;
        for cur_pos in route {
            sum += t[pre_pos][cur_pos];
            pre_pos = cur_pos;
        }

        if sum + t[pre_pos][0] == k {
            ans += 1;
        }
    }

    println!("{ans}");
}
