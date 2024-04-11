//write the program to demostrate the area of square and rectangle using friend function
#include<iostream>
using namespace std;
class areaRectangle;
class areaSquare{
    int length;
    public:
        void getData(int length);
        friend void printData(areaSquare);
};
class areaRectangle{
    int length1, height;
    public:
        void getDat(int length1, int height);
        friend void printDat(areaRectangle);
};
void areaSquare:: getData(int L){
    length=L;
}
void printData(areaSquare square){
    float area=square.length*square.length;
    cout<<"Area of square: "<<area;
}
void areaRectangle::getDat(int LE,int H){
    length1=LE;
    height=H;
}
void printDat(areaRectangle areaR){
    float area=areaR.length1*areaR.height;
    cout<<"Area of Rectangle: "<<area;
}
int main(){
    areaSquare S;
    areaRectangle R;
    int a;
    cout<<"Enter the length of square: ";
    cin>>a;
    S.getData(a);
    printData(S);

    int b,c;
    cout<<"\nEnter the length of Rectangle: ";
    cin>>b;
    cout<<"Enter the height of Rectangle: ";
    cin>>c;
    R.getDat(b,c);
    printDat(R);

    return 0;
}