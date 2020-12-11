#include <bits/stdc++.h>
using namespace std;
bool myCompare(pair<int,int> p1, pair<int,int> p2) {
    return((p1.first)<(p2.first));
}

int main() {

    int arr[]= {10,16,17,14,5,3,2,9};
    vector< pair<int, int>> v;  //vector declaration which will hold all the pairs...   

    int n= sizeof(arr)/sizeof(arr[0]);  //size of the array...

    for(int i=0; i<n; i++) {
        v.push_back(make_pair(arr[i],i));  //making pairs of elements and it;s index and pushing it into a vector
    }

    sort(v.begin(),v.end(), myCompare);  //sorting using our comparator..

    for(int i=0; i<v.size(); i++) {
        arr[v[i].second] = i;  //overwriting and reducing the array
    }

    for(int i=0; i<v.size(); i++) { //printing hte array
        cout<<arr[i]<<" ";
    }
}