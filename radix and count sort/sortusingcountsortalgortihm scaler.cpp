class Solution {
public:
    vector<int> sortArray(vector<int>& a) {
       
vector<int> count(100001, 0);
 int n = a.size(); 
vector<int >result ; 
for (int i=0;i<n;i++){
 count [a[i]]++;
 }
 for (int i=0;i<100001;i++) { 
for (int j=0;j<count[i];j++) {
 result.push_back(i); 
}
 }
 return result ;
    }
};