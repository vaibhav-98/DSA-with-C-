// ================= Palindrom ============================//


#include<iostream> 
#include<string.h>
#include<vector>
using namespace std;


bool checkPalindrom( char word[]) {
    int i = 0;
    int n = strlen(word);
    int j = n - 1;

     while(i <= j) {
        if(word[i] != word[j]) {
            return false;
        } 
         else {
            i++;
            j--;
         }
     }
     return true;
}


int main () {
    char arr[100] = "BabbaB";

    cout << "palindrom check: " << checkPalindrom(arr) << endl ;
}










