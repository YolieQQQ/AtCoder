#![allow(
  non_snake_case,
  unused_variables,
  unused_assignments,
  unused_mut,
  unused_imports,
  dead_code
)]
use std::cmp::*;
use std::collections::*;
use whiteread::parse_line;

fn main() {
  let mut S: String = parse_line().unwrap();
  let mut cnt = 0;
  for i in 0..4 {
    for j in i+1..4 {
      if S.as_[i as usize] {
        cnt += 1;
      }
    }
  }
}
