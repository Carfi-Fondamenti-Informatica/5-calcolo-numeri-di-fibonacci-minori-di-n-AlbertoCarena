#include <iostream>

using namespace std;
int main() {
    int a=1,b=1,c;
    int n;
    cin>>n;
    cout<<"1"<<endl;
    cout<<"1"<<endl;
    while (n>=(a+b)) {
        c=a+b;
        cout<<c<<endl;
        b=a;
        a=c;

    }
    

    return 0;
}
