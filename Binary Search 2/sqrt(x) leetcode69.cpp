
class Solution {
public:
    int mySqrt(int x) {
   int l =0;
   int h = x;
    int ans = 0;
   while (l<=h){
   long long m = l+(h-l)/2;
  if (m*m ==x){
   return m ;
} else if (m*m>x){
   h = m-1;
} else{ 
  ans =m;
  l =m+1;
}
}
return ans ;
}
};
