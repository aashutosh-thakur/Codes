#include<iostream>
#include<vector>
using namespace std;
void sortss(vector<int>& v)
{
    //v.sort(v.begin(),v.end());
}
int main()
{
    //vector<int> v;
   // v.push_back(2);
   // v.push_back(3);
   // v.push_back(4);
   // v.push_back(2);
    //v.pop_back();
//    // v.pop_back();
//    for(int i=0;i<v.size();i++)
//    {
//     //cout<<v[i]<<"  ";
//     cout<<v.at(i)<<"  ";
//    }

   // cout<<"capacity"<<v.capacity()<<endl;
   // cout<<"size :"<<v.size();
    int n;
    cin>>n;
   vector<int> v(n);
   v.push_back(3);
   cout<<"capacity : "<<v.capacity();
   cout<<"size : "<<v.size()<<endl;
   for(int i=0;i<n;i++)
   {
    //cout<<v[i]<<"  ";
    cin>>v.at(i);
   }
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<"  ";
   // cin>>v[i];
   }
    sortss(v);
    for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<"  ";
   
   }


}