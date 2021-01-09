#include<iostream>
#include<cmath>
using namespace std;
double PI=3.141592651;
double carttopolar(double &x, double &y){
double r=sqrt(x*x + y*y);
double theta=(atan(y/x)*180)/PI;
cout<<r<<endl;
return theta;




}
int main(){
    double x,y;
    cin>>x>>y;
    cout<<carttopolar(x,y);



}
