//using class to find volume of sphere
#include <iostream>
using namespace std;

class sphere
{ //declarations
private:
    float rad, vol;

public:
    void input();
    void compute();
    void output();

};
//member function definitions

void sphere::input()
{
    cout <<"enter radius: ";
    cin >> rad;
}

void sphere::compute()
{
    vol = (4 / 3) * (22 / 7) * (rad * rad * rad);
}

void sphere::output()
{
    cout << "volume of sphere is: "<< vol;
}

int main()
{
    sphere p;//object

    p.input();
    p.compute();
    p.output();
}//end main
