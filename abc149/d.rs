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
    let K: usize = read();
    let R: usize = read();
    let S: usize = read();
    let P: usize = read();
    let mut T: String = read();
    let mut T_chars = T.chars();
    let mut winT = Vec::new();
    for t in T_chars.iter() {
        if t=='r' {
            winT.push('p');
        }
        if t=='s' {
            winT.push('r');
        }
        if t=='p' {
            winT.push('s');
        }
    }

    for i in 0..(N-K) {
        if winT[i]==T_chars[i+K] {
            if winT[i]=='r' {
                winT[i] = 's';
            }
            if winT[i]=='s' {
                winT[i] = 'p';
            }
            if winT[i]=='p' {
                winT[i] = 'r';
            }
        }
    }
    let mut ans = 0;
    for wt in winT {
        if t=='r' {
            ans += R;
        }
        if t=='s' {
            ans += S;
        }
        if t=='p' {
            ans += P;
        }
    }

    println!("{}", ans)
    
}