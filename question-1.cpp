#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {

    int t;
    cin>>t;
    for (int i=0; i<t;i++){
        int c,k,temp=0;
        bool ans=true;
        cin>>c>>k;
        for (int j=0; j<c; j++){
            int temp2;
            cin>>temp2;
            if (temp2<temp){
                ans=false;
            }
            temp=temp2;
        }
        if(k==1 && ans==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
    



