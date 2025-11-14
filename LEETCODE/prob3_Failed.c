int reverse(int x){
    int n= x;
    int rev=0;
    int dig= 0;

    while (1){
        dig= x % 10;
        rev=rev*10 + dig;
        x= x/10;
    }
    if (rev >= 2,147,483,647)
    return 0;
    else
    return rev;
}
