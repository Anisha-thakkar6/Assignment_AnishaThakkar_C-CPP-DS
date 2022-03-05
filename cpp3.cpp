#include <iostream>
using namespace std;

class AddAmount{
    int amt;
    public:
    AddAmount(){
        amt=50;
    }
    AddAmount(int a){
        amt=50;
        amt=a+amt;
    }
    void disp(){
        cout<<amt<<endl;
    }
};

int main(){
    AddAmount a1;
    AddAmount a2(15);
    a1.disp();
    a2.disp();
    return 0;
} 
