#include<iostream>
using namespace std;
int main() {
    int choice;
    cout<<"1.snacks"<<endl<<"2.meal"<<endl<<"3.beverages"<<endl;
    cout<<"enter your choice: ";
    cin>>choice;
    switch(choice) {
       case 1:
            cout<<"1.samosa"<<endl<<"2.vadapav"<<endl<<"3.maggi"<<endl;
            switch(choice) {
                case 1:
                cout<<"samosa";
                break;
                case 2:
                cout<<"vadapav";
                break;
                case 3:
                cout<<"maggi";
                break;
            }
        break;    
        
        case 2:
            cout<<"1.veg"<<endl<<"2.non-veg"<<endl;
            switch(choice) {
                case 1:
                cout<<"veg";
                break;
                case 2:
                cout<<"non-veg";
                break;
            }
        break;
        case 3:
            cout<<"1.tea"<<endl<<"2.coffee"<<endl<<"3.cold drink"<<endl;
            switch(choice) {
                case 1:
                cout<<"tea";
                break;
                case 2:
                cout<<"coffee";
                break;
                case 3:
                cout<<"cold drink";
                break;
                
            }
        break;    
    }
    return 0;
}
/*OUTPUT
1.snacks
2.meal
3.beverages
enter your choice: 3
1.tea
2.coffee
3.cold drink
cold drink */
