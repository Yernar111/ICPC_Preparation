#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int left=0, right=s.size()-1;
    while (left<right){
        if (s[left]==s[right]){
            left++;
            right--;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}