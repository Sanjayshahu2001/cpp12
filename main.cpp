#include <iostream>

using namespace std;
class AddAmount
{
public:
    int A;

    AddAmount()
    {
                cout<<"Def"<<endl;
        A=50;

    }
    AddAmount(int x)
    {
        A=x+50;


    }

    void show()
    {
        cout<<"Total  Amount:"<<A<<endl;

    }
};
int main()
{
    int e;
    cout<<"Enter Add Amount:"<<e;
    cin>>e;
    AddAmount a,a1(e);
    a1.show();
    //a.show();

    return 0;
}
