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
    let N: isize = read();
    let mut D = Vec::new();
    for _ in 0..N {
        let d: isize = read();
        D.push(d);
    }
    let mut ans: isize = 0;
    for n1 in 0..N {
        for n2 in n1+1..N {
            ans += D[n1 as usize]*D[n2 as usize];
        }
    }

    println!("{}", ans);
    
}