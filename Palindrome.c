bool isPalindrome(int x) {
    if(x<0){
    return false;
    }  
    int num=x;
    long long reverse=0;
    while(num!=0){
        int store=num%10;
        num=num/10;
        reverse=reverse*10+store;
    } 
    if(x==reverse){
        return true;
    }
    else
      return false;
}
