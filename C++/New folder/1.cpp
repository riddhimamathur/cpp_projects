#include <iostream>
using namespace std ;

    class student {
        private : 
        int roll;
        string name;
        float marks ;
        
        public :
            void display()
        {cout << "name : " << name << endl;
        cout << "roll number : "<< roll << endl;
        cout << "marks : "<< marks << endl;}
        
        protected:
        int a=10;
        };
        
        int main()
        {
            student s1;
            s1.display();
            return 0;
        }
    
