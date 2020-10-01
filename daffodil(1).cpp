#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> numb;
    int temp;
    while(cin>>temp) {
        numb.push_back(temp);
    }
    int l = numb.size();
    int x = l;
    int min=0;
    int max=0;
    for(int j=0;j<l;j++)
    {
        if(numb[j] < min) {
            min = numb[j];
        }
        if(numb[j] >= max) {
            max = numb[j];
        }
    }
    int rows = abs(min) + max;
    char arr[rows][l];
    int start = 0;
    int i=0;
    while(l>0) {
        if(numb[start] >= 0) {
            for(int j=rows-1;j>=0;j--) {
                if(j==max-1) {
                    for(int k=numb[start]-1;k>=0;k--) {
                        arr[j][i] = 'x';
                        j--;
                    }
                }
                arr[j][i] = '-';
            }
        }
        if(numb[start] < 0) {
            for(int j=rows-1;j>=0;j--) {
                if(j==rows-1) {
                    for(int k=abs(numb[start])-1;k>=0;k--) {
                        arr[j][i] = 'x';
                        j--;
                    }
                }
                arr[j][i] = '-';
            }
        }
        start++;
        i++;
        l--;
    }
    for(int j=0;j<rows;j++) {
        for(int k=0;k<x;k++) {
            cout<<arr[j][k]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/*

Input: 2 4 -3 0 -5 7 -4

Output:
- - - - - x - 
- - - - - x - 
- - - - - x - 
- x - - - x - 
- x - - - x - 
x x - - - x - 
x x - - - x - 
- - - - x - - 
- - - - x - x 
- - x - x - x 
- - x - x - x 
- - x - x - x 
/*
