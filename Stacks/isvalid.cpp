#include<iostream>
#include<vector>
using namespace std;

    bool isValid(string s) {
        if(s.size()==0){
            return true;

        }
        int find = s.find("abc");
        if(find!=string::npos){
            string left = s.substr(0,find);
            string right = s.substr(find+3,s.size());
            return isValid(left+right);

        }
        return false;
    }



int main(){
    cout<<"har har mahadev";
    return 0;
}