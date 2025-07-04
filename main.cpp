#include <iostream>

using namespace std;
class Average
{
    public:
    float a,b,c,d,e;

    void calc()
    {
        cout<<"Enter three Values:"<<endl;
        cin>>a>>b>>c;
        d=a+b+c;//20+30+40
        e=d/300*100;//90/500*100
        //cout<<"Average Is:"<<e<<endl;
    }
   void showdata()
    {
        cout<<"Average Is:"<<e<<endl;
    }
};
int main()
{
    Average a;
    a.calc();
    a.showdata();

    //cout << "Hello world!" << endl;
    return 0;
}
