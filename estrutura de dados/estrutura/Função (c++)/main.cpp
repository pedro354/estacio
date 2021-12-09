

int func1 (long num){
    int n, na=1;
    while (num/10!=0){
        na +=1;
        num /= 10;
    }
    return na;
}

main(){

    cout << func1 (132041);
}
