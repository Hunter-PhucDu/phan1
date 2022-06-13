#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;
int main()
{
cout << "Phan 1. Bai 3:\n";
int A[50];

// Nhap gia tri cho A[]
srand(time(NULL));
int i =0;
for (i=0; i<50; i++)
	{
    	A[i] = rand()%50;
	}
	
// So phan tu chan
int sumSoChan = 0;
for(int i = 0; i < 50; i++) 
 	{
      if(A[i]%2 == 0) 
	  	{
          sumSoChan = sumSoChan++;
        }
 	} cout << "So phan tu chan cua mang = " << sumSoChan << "\n";
 	
// phan tu lon nhat
int maxPt = 0;
int vTriMax = 0;
for(int i = 0; i < 50; i++) 
 	{
      if (maxPt < A[i])
      {     	
      	maxPt == A[i];
      	vTriMax = i;
      	
      }    
     }
 cout << "phan tu lon nhat la "<< maxPt<<" o vi tri "<<vTriMax<<".\n";
 
// phan tu nho nhat
int minPt = 0;
int vTriMin = 0;
for(int i = 0; i < 50; i++) 
 	{
      if (minPt > A[i])
      {     	
      	minPt == A[i];
      	vTriMin = i;
      	
      }    
     }
 cout << "phan tu nho nhat la "<< minPt<<" o vi tri "<<vTriMin<<".\n"; 

// So lan xuat hien
for(int i = 0; i < 50; i++) 
 	{
      cout<<" "<<A[i];
     }
const int MAX = 50;
int coutXHien[MAX];
for(int i = 0; i < MAX; i++) 
	{
		coutXHien[i] = 0; 
	}		
              
  
for(int i = 0; i < 50; i++) 
  {		
    coutXHien[A[i]]++;           
  }
for(int i = 0; i < MAX; i++) 
  {	
    if ( coutXHien[i] > 0)
	{
		if ( coutXHien[i] == 1)
		{		
	    	cout << "Phan tu thu "<<i<<" xuat hien" << coutXHien[i] <<" lan!\n";
		}		
	}	           
  }
getch();
return 0;
}