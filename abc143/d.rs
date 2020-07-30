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
    let N: usize = read();
    let mut L = Vec::new();
    for _ in 0..N {
        let l: i128 = read();
        L.push(l);
    }
    let mut cnt = 0;
    for a in 0..N {
        for b in a+1..N {
            for c in b+1..N {
                if L[a]<(L[b]+L[c]) && L[b]<(L[c]+L[a]) && L[c]<(L[a]+L[b]) {
                    cnt += 1;
                }
            }
        }
    }
    println!("{}", cnt);
}