#include <iostream>
using namespace std ;




int getGrade (int marks) {

    if (marks >=90)
       return 'A';
    else if (marks >=80)
      return 'B';
       else if (marks >=70)
      return 'C';
       else if (marks >=60)
      return 'D';
       else if (marks <=60)
      return 'E';
    
     
}


int main() {

    int marks ;
    cin >> marks ;

    char findGrade = getGrade (marks);
    cout << findGrade<< endl;
}