int reverse(int x){
    int rev=0;
    int dig= 0;

    while (x!=0){
        dig= x % 10;
        rev=rev*10 + dig;
        x= x/10;
    }
    if (rev >= 2147483647)
    return 0;
    else
    return rev;
}