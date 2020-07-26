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
    let n: i64 = read();
    let k: i64 = read();
    let mut h = Vec::new();
    for _ in 0..n {
        let hp: i64 = read();
        h.push(hp);
    }
    h.sort();
    let mut cnt = 0;
    for i in 0..h.len()-k {
        cnt += h[i];
    }



    println!("{}", cnt);
    
}