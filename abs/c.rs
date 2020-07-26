use std::io::*;
use std::str::FromStr;

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
    let mut S: String = read();
    let mut cnt = 0;
    for s in S.chars() {
        if s=='1' {
            cnt += 1;
        }
    }

    println!("{}", cnt);

    
}