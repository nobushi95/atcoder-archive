use num_integer::Roots;
use proconio::input;

fn main() {
    input! {
        n: i64,
    };
    let ans = (1..=n.sqrt())
        .map(|x| ((n / x) * x - n).abs() + ((n / x) - x).abs())
        .min()
        .unwrap();
    println!("{}", ans);
}
