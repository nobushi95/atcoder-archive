use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        s: Chars,
        t: Chars,
    };

    let at_tbl = String::from("atcoder").chars().collect_vec();

    for i in 0..s.len() {
        let si = s[i];
        let ti = t[i];
        if si == ti {
            continue;
        }

        if si == '@' && ti == '@' {
            continue;
        }

        if (si == '@' && at_tbl.contains(&ti)) || (ti == '@' && at_tbl.contains(&si)) {
            continue;
        }

        println!("You will lose");
        return;
    }

    println!("You can win");
}
