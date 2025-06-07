#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> arr1{2, 3, 4, 4, 5};
    int n = arr.size();
    int m = arr1.size();
    int i = 0, j = 0;
    vector<int> un;

    while(i < n && j < m) {
        if(arr[i] < arr1[j]) {
            if(un.empty() || un.back() != arr[i]) {
                un.push_back(arr[i]);
            }
            i++;
        } else if(arr[i] > arr1[j]) {
            if(un.empty() || un.back() != arr1[j]) {
                un.push_back(arr1[j]);
            }
            j++;
        } else {
            if(un.empty() || un.back() != arr[i]) {
                un.push_back(arr[i]);
            }
            i++;
            j++;
        }
    }

    while(i < n) {
        if(un.empty() || un.back() != arr[i]) {
            un.push_back(arr[i]);
        }
        i++;
    }

    
    while(j < m) {
        if(un.empty() || un.back() != arr1[j]) {
            un.push_back(arr1[j]);
        }
        j++;
    }

    
    for(int x : un) {
        cout << x << " ";
    }
    cout << endl;
}
