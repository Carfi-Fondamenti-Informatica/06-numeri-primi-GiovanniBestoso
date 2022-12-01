
int primo(int n, int i) {
  bool x=true;
  
  if (i!=1) {
    if ((n % i) != 0) {
      m--;
      x=primo(n, i);
    } else {
      x=false;
    }
  } else {
    x=true;
  }
  return x;
}
