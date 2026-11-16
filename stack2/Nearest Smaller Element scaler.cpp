vector<int> Solution::prevSmaller(vector<int> &a) {
vector <int> ans ;
stack<int > st ;
int n = a.size();
for ( int i =0; i<n;i++){
    while (!st.empty() && st.top()>=a[i]){
         st.pop();
}
if (st.empty ()){
   ans.push_back(-1);
}
else{
ans.push_back(st.top());

}
st.push(a[i]);
}
return ans;
}