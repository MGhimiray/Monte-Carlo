#include <iostream>
#include <cmath>
#include <random>

using namespace std;  
int n=10000;
double x[10000],y[10000];
int a=3456; int b=2899; int r=678935;
           
           
double f(double x, double y){
   return x*y;
   }
   
double random(double iseed){
               iseed = fmod(a + b * iseed, r);
           return iseed;          
           }

double calculation() {
   	double fz;
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    //cout << x[i] << "\t\t" << y[j] << endl;
        fz += f(x[i], y[j]);
    }
    }
    return fz;
}   

   
 
int main()
{
	
	double  fz,a,b,c,d;
	int m;
	double sum,small,large;
	double iseed=2340;
	cout<< "Enter the limit for x.\n";
	cin>> a>>b;
	cout << "Enter the limit for y.\n";
	cin>> c >> d;
	
	for(int i=1; i<n; i++){
	iseed=random(iseed);
	x[i]=a+(b-a)*iseed/r;
	iseed=random(iseed);
	y[i]=c+(d-c)*iseed/r;
	//cout << x[i] << "\t\t" << y[i] << "\t"<< iseed << endl;
	}
	
	fz=calculation();
	cout << fz << endl;
        
        sum=(b-a)*(d-c)*(fz/(n*n));
        cout<<sum <<endl; 


return 0;
}


