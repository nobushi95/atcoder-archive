use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};
use superslice::*;

fn main() {
    input! { s: String };
    let tbl_vec = vec![
        ("tourist", 3858),
        ("ksun48", 3679),
        ("Benq", 3658),
        ("Um_nik", 3648),
        ("apiad", 3638),
        ("Stonefeang", 3630),
        ("ecnerwala", 3613),
        ("mnbvmar", 3555),
        ("newbiedmy", 3516),
        ("semiexp", 3481),
    ];
    let tbl = tbl_vec.iter().cloned().collect::<HashMap<_, _>>();
    let ans = tbl.get(s.as_str()).unwrap();
    println!("{ans}");
}
