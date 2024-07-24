#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){
    string msg;
    cout<<"Enter the string:";
    getline(cin,msg);
    reverse(msg.begin(),msg.end());
    cout<<"The reversed string is:"<<msg;
    return 0;
}
