#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;
int main()
{
cout << "Phan 1. Bai 1:\n";
int A[50];

// Nhap gia tri cho A[]
srand(time(NULL));
int i =0, j=0;
for (i=0; i<50; i++)
	{
    	A[i] = rand()%10;
	}
	
// Boi cua 5
int coutBoi = 0;
for (i=0; i<50; i++)
{
		if ( A[i] % 5 == 0 & A[i] !=0)
			{
		       coutBoi = coutBoi + 1;
			}
} cout << "So phan tu la boi cua 5 = " << coutBoi << endl;

// Tong binh phuong so le
int sumSoLe = 0;
for(int i = 0; i < 50; i++) 
 	{
      if(A[i]%2 != 0) 
	  	{
          sumSoLe = sumSoLe + A[i]*A[i];
        }
 	} cout << "Tong binh phuong so le = " << sumSoLe << "\n\n";
 	
// So lan xuat hien
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
		cout << "Gia tri "<<i<<" xuat hien" << coutXHien[i] <<" lan!\n";
	}	
            
  }


getch();
return 0;
}