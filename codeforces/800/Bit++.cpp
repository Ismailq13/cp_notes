#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    int x = 0;
    for(int i=1; i<=w;i++){
        string a;
        cin>>a;
        if (a.find("++")!= string::npos){
            x++;
        }
        else{
            x--;
        }
        
    }
    cout<<x;


    return 0;
}
