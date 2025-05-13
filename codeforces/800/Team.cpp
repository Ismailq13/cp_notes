#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    int jumlah = 0;
    for(int i=1; i<=w;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b+c>=2){
            jumlah++;
        }
        
    }
    cout<<jumlah;


    return 0;
}
