use proconio::input;

fn main() {
    input! {
        s: String,
    };
    let octave = "WBWBWBWW";
    let ans = match (12 - s.find(octave).unwrap()) % 12 {
        7 => "Do",
        9 => "Re",
        11 => "Mi",
        0 => "Fa",
        2 => "So",
        4 => "La",
        6 => "Si",
        _ => unreachable!(),
    };
    println!("{}", ans);
}
