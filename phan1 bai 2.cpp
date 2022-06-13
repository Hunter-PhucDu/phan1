#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;
int main()
{
cout << "Phan 1. Bai 2:\n";
int A[50];

// Nhap gia tri cho A[]
srand(time(NULL));
int i =0;
for (i=0; i<50; i++)
	{
    	A[i] = rand()%100;
	}
	
// Tong so Duong
int sumSoDuong = 0;
for(int i = 0; i < 50; i++) 
 	{
      if(A[i] > 0) 
	  	{
          sumSoDuong = sumSoDuong + A[i];
        }
 	} cout << "Tong so duong cua mang = " << sumSoDuong << "\n";
 	
// phan tu lam mat tinh tang dan
for(int i = 0; i < 50; i++) 
 	{
      cout << A[i] << " ";
     }
cout << "\n\n";
int viTriPt = 0;
 for(int i = 0; i < 50; i++) 
 	{
      if (A[i] > A[i+1])
      {     	
      	viTriPt = i+1;
      	break;
      }    
     }
 cout << "phan tu thu "<<viTriPt<<" lam mat tinh tan dan cua mang.\n";
 
// phan tu trong khoang [-2; 2]
int coutPtu = 0;
 for(int i = 0; i < 50; i++) 
 	{
      if (A[i] >= -2 & A[i] <= 2)
      {     	
      	coutPtu = coutPtu +1;
      }     
     }  cout << "So phan tu trong doan [-2; 2] la "<<coutPtu<<"";
  
getch();
return 0;
}