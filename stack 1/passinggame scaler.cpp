int Solution::solve(int A, int B, vector<int> &C) {
    stack <int>st;
st.push(B);
for (int x : C) {
if (x!=0){
 st.push(x);
}else{
st.pop();
}
} 
return st.top();
};


