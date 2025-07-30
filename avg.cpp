#include <bits/stdc++.h>
using  namespace std;
int main() {
    int n;
    double sum=0; double avg;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array of integers: "<<endl;
    for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=(double)arr[i];
    }
    avg=sum/n;
    cout<<"Average: "<<avg;
    return 0;
}
