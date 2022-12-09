#include <iostream>

#include<iostream>
#include<cmath>
using namespace std;

double  deg2rad(double aa1){
    double ra1 ;
    ra1 = (aa1*(M_PI))/180 ;
    return ra1 ;
}
double rad2deg(double bb1){
    double de1 ;
    de1 = (bb1*180)/(M_PI);
    return de1 ;
    }
double findXComponent(double ll1,double ll2,double aa1,double aa2){
    double x ;
    x = (ll1 * cos(aa1)) + (ll2 * cos(aa2));
    return x ;
    }
double findYComponent(double ll1,double ll2,double aa1,double aa2){
    double y ;
    y = (ll1 * sin(aa1)) + (ll2 * sin(aa2));
    return y ;
    }
double pythagoras(double x , double y ){
    double result_vec_length;
    result_vec_length = sqrt(( x*x ) + ( y*y )) ;
    return result_vec_length ;
    }
void showResult(double rl , double rd){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<"\n" ;
    cout << "Length of the resultant vector = " << rl  << "\n" ;
    cout << "Direction of the resultant vector (deg) = " << rd << "\n" ;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    }
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 
    showResult(result_vec_length,result_vec_direction);
}