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
    let C500: isize = read();
    let C100: isize = read();
    let C50: isize = read();
    let X: isize = read();


    let mut cnt = 0;
    
    for i in 0..C500+1 {
        for j in 0..C100+1 {
            for k in 0..C50+1 {
                if 500*i+100*j+50*k==X {
                    cnt += 1;
                }
            }
        }
    }

    println!("{}", cnt);
}