#include<iostream>
using namespace std;

int main(){

    int N, i = 1;
    cin >> N;
    
    while(i <= N - (N/2))
    {
        int k = 1, m = 1, p = 1;
        while(m <= (N - (N/2))-i)
        {
            cout << " ";
            m++;
        }
        while(k <= i)
        {
        	cout << "*";
        	k++;
        }
        while(p <= (i - 1))
        {
            cout << "*";
            p++;
        }
        cout << endl;
        i++;
    }
    i = 1;
    while(i < N - (N/2))   // i <= 3
    {
        int j = 1;
        int m = 1, p = 1;	// k = i 
        while(m <= i)
        {
            cout << " ";
            m++;
        }
        while(j <= (N - (N/2))-i)
        {
        	cout << "*";
        	j++;
        }
        while(p <= (N - (N/2))-i-1)
        {
            cout << "*";
            p++;
        }
        cout << endl;
        i++;
    }
  
}


