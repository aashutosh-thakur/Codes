#include<iostream>
using namespace std;
int cut_rod(int p[], int n){
    if (n==0) return 0;
    int q=-1e9;
    for(int i=1;i<=n;i++){
        q = max(q, p[i-1]+cut_rod(p,n-i));
    }
    return q;
}
void max(int prices[], int length){
    cout << "Maximum Profit: " << cut_rod(prices, length) << endl;
}
int main(){
    int n;
    cout<<"Enter the length of the rod: ";
    cin>>n;
    int* prices = new int[n];
    cout<<"Enter the prices: ";
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    max(prices ,n);
}