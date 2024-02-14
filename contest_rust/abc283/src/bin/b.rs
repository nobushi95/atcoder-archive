use itertools::Itertools;
use proconio::{input, marker::*};
use std::cmp::*;

fn main() {
    input! {
        n: usize,
        mut a: [usize; n],
        q: usize,
    };
    for _ in 0..q {
        input! { cmd: usize };
        match cmd {
            1 => {
                input! { k: Usize1, x: usize };
                a[k] = x;
            }
            2 => {
                input! { k: Usize1 };
                println!("{}", a[k]);
            }
            _ => unreachable!(),
        }
    }
}
