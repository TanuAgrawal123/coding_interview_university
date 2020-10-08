#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <long long int> vec;
auto li={1,2,3,4,5};
cout << "Initial size  = " << vec.size() << endl;
vec.assign(5,100);//assign 100 to 5 places
cout << "modified size =" <<vec.size() <<endl;
for(int i=0;i<vec.size();i++)
    cout << vec[i] <<endl;
    vec.assign(li);//copy values of li to assign vector;
    cout << "modified vector" <<endl;
    for(int i=0;i<vec.size();i++)
    cout << vec[i] <<endl;
    vec.erase(vec.begin());// delete item at index 5 and shift all trailing element to left
    for(int i=0;i<vec.size();i++)
    cout << vec[i] <<endl;
    cout << vec.capacity()<< endl;
    cout << vec.empty()<<endl;

return 0;

}
