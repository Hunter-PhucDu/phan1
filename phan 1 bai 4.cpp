#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;
int UCLN(int a, int b) 
	{
     if(a==b)
         return a;
     else if(a>b)
         return UCLN(a-b,b);
     else
         return UCLN(a,b -a);
     }

int UC(int A[], int m) 
	{
      if(m==1)
          return A[0];
      else
	      return UCLN(A[m-1],UC(A,m-1));
    }
int main()
{
cout << "Phan 1. Bai 4:\n";
int A[50];

// Nhap gia tri cho A[]
srand(time(NULL));
int i =0, j=0;
for (i=0; i<50; i++)
	{
    	A[i] = rand()%1000;
	}
	
// Chia 3 du 1 va chia 7 du 2
int coutChia3va7 = 0;
for (i=0; i<50; i++)
{
		if ( A[i] % 3 == 1 & A[i] % 7 == 2)
			{
		       coutChia3va7 = coutChia3va7 + 1;
			}
} cout << "So phan tu chia 3 du 1 va chia 7 du 2 : " <<coutChia3va7<< endl;

// so nguyen to nho hon n
int n;
cout<<"nhap so nguyen n: "; cin>>n; cout<<endl; 
 for(int i = 0; i < 50; i++) 
 	{
      bool soNguyenTo = true;
      for(int j = 2; j <= sqrt(A[i]); j++) 
	  	{
          if( A[i] == 2 || A[i] % j == 0)
		  	 {
                soNguyenTo = false;
                break;
             }
        }
      if(soNguyenTo == true) 
	  	{
  		  if(A[i] < n) 
             {
               cout << A[i] << " ";
             }          
        } 
     }
     cout<<endl;
int a;
int m = 50;
cout<<"UCLN cua mang A[] la "<<UC(A,m);
//system("pause");
getch();
return 0;
}