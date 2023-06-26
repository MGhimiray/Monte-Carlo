#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n, dn;
	n = 10000;
	double x[n], max_x, min_x, dd, high, low;
	
	//////generate a random sample
	
	int a = 2000;
	int b = 2899; 
	double iseed = 6783;
	double r = 67893;
  	    
	for(int i=0; i<n; i++){
           a=a+100;
	   double sum=0.0;
	   for (int j=0; j<n; j++) {
                 iseed = fmod((a + b * iseed), r);
                 sum += iseed / r;
             }
          x[i]=sum/n;  
	    }
	
	max_x=x[0];
	min_x=x[0];	
	for(int i=0; i<n; i++){
	    if(max_x<x[i]){
	      max_x=x[i];
	      }
	    if(min_x>x[i]){
	      min_x=x[i];
	      }
	   }
	
	cout<< max_x << "\t " << min_x << endl;	     

        dd=(max_x-min_x)/20;
        cout<< dd;   
       
       dn=0;
       high=max_x;
       low=high-dd;
       while (true){
            for(int i=0; i<n; i++){
               if(x[i]<=high && x[i]>low){
                 dn+=1;
                 }
                }
             cout<< high << "\t\t" << dn << endl ;
             dn=0;
             high=low;
             low-=dd;
                if(low <= min_x){
                   break;
                   }             
            }
return 0;
}

 


	
