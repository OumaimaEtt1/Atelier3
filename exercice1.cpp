#include <iostream>

using namespace std;

class mere
{
    public:
        void display(){
            cout <<"Je suis la classe mère"<<endl;
        }
};

class fille : public mere
{
    public:
        void display(){
            cout<<"Je suis la classe fille"<<endl;
        }
};

int main(){
    fille f1;
    f1.display();
}
