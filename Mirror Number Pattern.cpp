#include<iostream>
using namespace std;


int main(){

    int N, i = 1;
    cin >> N;
    
    while(i <= N)
    {
        int j = 1;
        int k = 1;
        while(k <= N-i)
        {
            cout << ' ';
            k++;
        }
        while(j <= i)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
  
}


