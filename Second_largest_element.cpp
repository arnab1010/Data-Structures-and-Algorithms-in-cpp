// O(n) solution for the problem

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define mod 1000000007
#define pb push_back()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n<2){
        cout<<"2nd largest is not available"<<endl;
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]<first && arr[i]>second){
            second = arr[i];
        }
    }
    if(second == INT_MIN)
        cout<<"All elements are same"<<endl;
    else
        cout<<second<<" is the 2nd largest element"<<endl;
    return 0;
}
