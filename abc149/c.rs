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


fn get_next_prime(mut x: usize) {
    loop {
        let mut is_prime_cnt = 0;
        for p in 2..x {
            if x%p==0 {
                break;
            } else {
                is_prime_cnt += 1;
            }
        }
        if is_prime_cnt==x-2 {
            println!("{}", x);
            return;
        }
        x += 1;
    }
}


fn main() {
    let X: usize = read();
    get_next_prime(X);
}
