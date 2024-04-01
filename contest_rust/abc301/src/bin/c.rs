use itertools::Itertools;
use proconio::{input, marker::*};
use std::{
    cmp::*,
    collections::{HashMap, HashSet},
};

fn main() {
    input! {
        s: Chars,
        t: Chars,
    };
    let atcoder = "atcoder".chars().collect_vec();
    let mut tbl_s = HashMap::new();
    let mut tbl_t = HashMap::new();
    for i in 0..s.len() {
        *tbl_s.entry(s[i]).or_insert(0) += 1;
        *tbl_t.entry(t[i]).or_insert(0) += 1;
    }

    for c in atcoder {
        let m = tbl_s
            .get(&c)
            .cloned()
            .unwrap_or_default()
            .max(tbl_t.get(&c).cloned().unwrap_or_default());
        *tbl_s.entry('@').or_insert(0) -= m - tbl_s.get(&c).cloned().unwrap_or_default();
        tbl_s.insert(c, m);
        *tbl_t.entry('@').or_insert(0) -= m - tbl_t.get(&c).cloned().unwrap_or_default();
        tbl_t.insert(c, m);
    }

    let mut res = tbl_s.get(&'@').cloned().unwrap_or_default() >= 0;
    for c in 'a'..'z' {
        res &= tbl_s.get(&c).cloned().unwrap_or_default()
            == tbl_t.get(&c).cloned().unwrap_or_default();
    }
    let ans = if res { "Yes" } else { "No" };
    println!("{ans}");
}
