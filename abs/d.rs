use std::io::*;
use std::str::FromStr;
use std::iter::*;
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
    let mut A = Vec::new();
    for _ in 0..N {
        let a: usize = read();
        A.push(a);
    }
    let mut cnt = 0;
    'solve:
    loop {
        for i in 0..N {
            if A[i]%2==0 {
                A[i] /= 2;
            } else {
                break 'solve;
            }
        }
        cnt += 1;
    }
    println!("{}", cnt);
}