/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin>>N;
    vector<int>a(N);
    for(int i=0;i<N;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int result=0;
    for(int i=0;i<N;i=i+2){
        result = result+ a[i+1]-a[i];
    }
    cout<<result<<endl;
    return 0;
}