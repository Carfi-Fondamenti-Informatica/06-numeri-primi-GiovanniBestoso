bool primo( int n, int i){
    if (n%i==0){
        return false;
    }else if (n%i!=0){
        primo(n,i+1);
    }

    return true;
}
