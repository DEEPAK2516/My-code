// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class first{
    public:
    int calc(int x,int y,int z){
        cout<<"sum of 3 int= "<<x+y+z<<endl;
    }
    float calc(float A, float B, float C){
        cout<<"sum of 3 float= "<<A+B+C<<endl;
    }
    int calc(int X,int Y){
        cout<<"sum of 2 int= "<<X+Y;
    }
};
int main() {
    first o;
    o.calc(1,2,3);
    o.calc(3.50,3.50,4);
    o.calc(25,16);
    
}
