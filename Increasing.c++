#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
       if(!flag){
           cout<<"YES"<<endl;
       }
        
    }
    return 0;
}
