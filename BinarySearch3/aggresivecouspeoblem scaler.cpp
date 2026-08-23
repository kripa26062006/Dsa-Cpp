bool isFeasible(vector<int> &A, int B, int mid) {
 int lastpos = A[0];
 int count = 1;
for (int i =1; i<A.size();i++){
if (A[i]-lastpos>=mid){
  lastpos =A[i];
count ++;
}
if (B==count){
return true ;
}
}
return false;
} 
int solve(vector<int> &A, int B) {
 sort(A.begin(), A.end());
int l =1 ;
int h= A.back()-A.front();
int ans =0;
while (l<=h){
int mid =l+(h-l)/2;
if (isFeasible(A, B, mid)) {
ans= mid;
h=mid-1;
}else{
 l =mid+1;
}
}
return ans ;
}