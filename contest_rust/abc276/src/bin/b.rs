use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};

fn main() {
    input! {
        n: usize, m: usize,
        ab: [(usize, usize); m],
    };
    let mut tbl: HashMap<_, _> = (1..=n).map(|x| (x, HashSet::<usize>::new())).collect();
    ab.iter().for_each(|(a, b)| {
        tbl.get_mut(a).unwrap().insert(*b);
        tbl.get_mut(b).unwrap().insert(*a);
    });
    tbl.iter()
        .sorted_by(|l, r| l.0.cmp(&r.0))
        .for_each(|(_, a)| {
            let ans = if a.len() == 0 {
                format!("0")
            } else {
                format!("{} {}", a.len(), a.iter().sorted().join(" "))
            };
            println!("{ans}");
        });
}
