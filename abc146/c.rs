use std::io::*;
use std::str::FromStr;
use std::collections::*;

fn read<T: FromStr>() -> T {
    let stdin = stdin();
    let stdin = stdin.lock();
    let token: String = stdin
        .bytes()
        .map(|c| c.expect("failed to read char") as char) 
        .skip_while(|c| c.is_whitespace())
        .take_while(|c| !c.is_whitespace())
        .collect();
    token.parse().ok().expect("failed to parse token")
}



fn main() {
    let A: i128 = read();
    let B: i128 = read();
    let X: i128 = read();
    let N = if (X/A)-(B*10)>0 { (X/A)-(B*10) } else { X/A-9 };
    let mut prev = X;
    for n in N..10i128.pow(9) {
        let d = (n as f64).log10() as i128;
        let price = A*n+B*d;
        println!("{}", price);
        if n==0 {
            prev = n;
            continue;
        }
        if price > X {
            break;
        }
        if price < 0 {
            prev = 0;
            break;
        }
        prev = n;
    }

    println!("{}", prev);
}