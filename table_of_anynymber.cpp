#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter a number to print its table: ";
    cin>>num;

    cout << "The table of " << num << " is" << endl;

    for(int i=1;i<=10;i++){
        
        cout<<i<<" x "<<num<<" = "<<i*num<<endl;

    }

return 0;

}