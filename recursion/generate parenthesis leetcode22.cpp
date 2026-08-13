class Solution {
public:
 
void generate (string current , int o_used , int c_used , int n, vector<string>&result){
     if (o_used== n && c_used==n){
      result. push_back(current);
   return ;
}
if (o_used<n){
   generate (current+ "(" , o_used+1, c_used , n ,result );
}
if (c_used<o_used){
generate (current+")",o_used, c_used+1, n ,result);
}

}
vector<string> generateParenthesis(int n) {
    vector<string>result;
    generate("", 0, 0, n, result);  
    return result;
}
};