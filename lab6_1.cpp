#include<iostream>
using namespace std;

int main(){
    int i = 1 ;
    int j = 0 ;
    int N[1000] ;
    int evennum = -1 ;
    int oddnum = 0 ;
    while (i != 0)
    {
        int itg ;
        cout << "Enter an integer: ";
        cin >> itg ;
        N[j] = itg ;
        if ((N[j])%2 == 0) {
            evennum++ ;
        }
        else{
            oddnum++;
        }
        i = itg ;
        j++;    
    }
    cout << "#Even numbers = " << evennum ;
    cout << "\n" ;
    cout << "#Odd numbers = " << oddnum ;
    return 0;
    }
