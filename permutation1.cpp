#include <bits/stdc++.h>  //no elements are repeated....i.e distinct elements
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> &a, int idx) { //git changes...

   
    if(idx == a.size()) { //base case...
        ans.push_back(a);
        return;
    }

    for(int i= idx; i<a.size(); i++) { //first branch changes..

        swap(a[i],a[idx]);
        permute(a,idx+1); //recursively calling
        swap(a[i],a[idx]);
    }

    return;

}
int main() {
    int n;
    cin>>n;

    vector<int> a(n);  //vector declaration

    for(auto &i: a) {  //taking input...
        cin>>i;
    }

    // permute(a,0);    //passing vector and starting index....1) recursive method...



    // 2) STL method...(universal hai..even if the elements are repeating...)
    sort(a.begin(),a.end());
    do {
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));


    for(auto v: ans) {  //displaying the elements in ans vector...
        for(auto i: v) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
