use itertools::Itertools;
use proconio::{input, marker::*};
use std::{cmp::*, collections::HashMap};

fn main() {
    input! {
        n: usize, q: usize,
    };

    let mut tbl = (0..n).map(|x| (x, (0, 0))).collect::<HashMap<_, _>>();
    for _ in 0..q {
        input! {
            cmd: usize, x: Usize1,
        };
        match cmd {
            1 => {
                tbl.entry(x).and_modify(|x| x.0 += 1);
            }
            2 => {
                tbl.entry(x).and_modify(|x| x.1 += 1);
            }
            3 => {
                let player = tbl.get(&x).unwrap();
                let ans = if player.0 >= 2 || player.1 >= 1 {
                    "Yes"
                } else {
                    "No"
                };
                println!("{ans}");
            }
            _ => unreachable!(),
        };
    }
}
