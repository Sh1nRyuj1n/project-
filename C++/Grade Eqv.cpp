#include <iostream>
using namespace std;

int main(){
       
    int grade;
    
    cout << "Enter Grades: ";
    cin >> grade;

    if( grade <= 74)
    {
        cout << "Grade Equivalent is 5.00"<< endl;
        
    }
    else if(grade <= 77){
        cout << "Grade Equivalent is 3.00" << endl;
    }
    
    else if(grade <= 80){
        cout << "Grade Equivalent is 2.75" << endl;
    }
    
    else if(grade <= 83){
        cout << "Grade Equivalent is 2.50" << endl;
    }
    
    else if(grade <= 86){
        cout << "Grade Equivalent is 2.25" << endl;
    }
    
    else if(grade <= 89){
        cout << "Grade Equivalent is 2.00" << endl;
    }
    
    else if(grade <= 92){
        cout << "Grade Equivalent is 1.75" << endl;
    }
    
    else if(grade <= 95){
        cout << "Grade Equivalent is 1.50" << endl;
    }
    else if(grade <= 98){
        cout << "Grade Equivalent is 1.25" << endl;
    }
    else if(grade <= 100){
        cout << "Grade Equivalent is 1.00" << endl;
    }
        
    return 0;
}
