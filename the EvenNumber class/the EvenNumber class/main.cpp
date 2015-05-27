//////////////////////////
//Name: Kathleen Levi
//
//Project: EX03_03 (9.11)
//
//Date: May 26, 2015
//////////////////////////

#include <iostream>
using namespace std;

class EvenNumber{
private:
    int value;
    
public:
    EvenNumber(){
        const int zero = 0;
    }
    EvenNumber(int newValue){
        value = newValue;
        
    }
    
    int getValue(){
        return value;
    }
    
    int getNext(){
        do{
            value ++;
        } while (value %2 != 0);
        
        cout << "The next number is " << value << endl;
        return value;

    }
    int getPrevious(){
        do{
            value --;
        } while (value %2 != 0);
        
        cout << "The previous number is " << value << endl;
        return value;

    }
    
};

int main(){
    
    EvenNumber number(16);
    number.getNext();
    number.getPrevious();
    
}