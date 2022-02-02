
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr[i][j];
            }
        }
        int upper=arr[0][1]+arr[0][2]+arr[1][2];
        int lower=arr[1][0]+arr[2][0]+arr[2][1];
        int d=max(upper,lower);
        cout<<d<<endl;
    }
    return 0;
}
