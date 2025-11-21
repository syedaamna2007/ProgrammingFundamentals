bool isSameAfterReversals(int num) {
    int rev = 0, rev2=0;
    int a= num;
    while (num != 0) {
        int dig = num % 10;

        rev = rev * 10 + dig;
        num = num/ 10;
    }
    while (rev!= 0){
        int dig = rev % 10;

        rev2 = rev2 * 10 + dig;
        rev = rev/ 10;
    }
    if (rev2==a) return true;
    else return false;
}
