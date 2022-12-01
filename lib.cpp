bool primo(int n, int i) {
    if (i!=1) {
        if ((n % i) != 0) {
            i--;
            x=primo(n, i);
        } else {
            return false;
        }
    } else {
        return true;
    }
