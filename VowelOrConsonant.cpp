#include<iostream>
using namespace std;
char inpc;
int main() {
    cout<<"Enter a letter: ";
    cin>>inpc;
    if (inpc == 'a' || inpc =='e' || inpc =='i' || inpc == 'o' || inpc == 'u' || inpc == 'A' || inpc == 'E' || inpc == 'I' || inpc == 'O' || inpc == 'U') {
        cout<<"The character is a vowel." ;
    } 
    else {
        cout<<"The character is a consonant.";
    }
return 0;    
}
/*OUTPUT
Enter a letter: V
The character is a consonant. */
