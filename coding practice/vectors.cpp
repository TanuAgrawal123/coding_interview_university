#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int> v1;
auto li={1,2,3,4,5};
cout << "Initial size  = " << v1.size() << endl;
v1.assign(5,100);//assign 100 to 5 places
cout << "modified size =" <<v1.size() <<endl;
for(int i=0;i<v1.size();i++)
    cout << v1[i] <<endl;
    v1.assign(li);//copy values of li to assign vector;
    cout << "modified vector" <<endl;
    for(int i=0;i<v1.size();i++)
    cout << v1[i] <<endl;
    v1.erase(v1.begin());// delete item at index 5 and shift all trailing element to left
    for(int i=0;i<v1.size();i++)
    cout << v1[i] <<endl;
    cout << v1.capacity()<< endl;
    cout << v1.empty()<<endl;

return 0;

}
