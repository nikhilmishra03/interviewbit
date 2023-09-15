vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int ar[n]={0};
    vector<int> ans;
    for(int i=0;i<n;i++){
        ar[A[i]-1]++;
    }
    int a,b;
    for(int i=0;i<n;i++){
        if(ar[i]==2){
            a=i+1;
        }
        if(ar[i]==0){
            b=i+1;
        }
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}
