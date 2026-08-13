 gcd ( int a , int b){
int ans =0 ;
if (b==0){
return a ;
}else {
ans = a%b;
}
return gcd (b, ans)