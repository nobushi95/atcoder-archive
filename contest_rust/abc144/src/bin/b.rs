use proconio::{input, marker::*};

fn main() {
    input! {
        n: i64,
    };

    for i in 1..=9 {
        if n % i == 0 {
            match n / i {
                1..=9 => {
                    println!("Yes");
                    return;
                }
                _ => (),
            }
        }
    }

    println!("No");
}
