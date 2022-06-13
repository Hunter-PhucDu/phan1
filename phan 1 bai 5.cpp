#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;
int main()
{
cout << "Phan 1. Bai 5:\n";
int A[50];

// Nhap gia tri cho A[]
srand(time(NULL));
int i =0, j=0;
for (i=0; i<50; i++)
	{
    	A[i] = rand()%50;
	}
	
// so sanh so ptu 
int countLon = 0;
int countNho = 0;
for (i=0; i<50; i++)
{
		if ( A[i] > 10)
			{
		       countLon++;  //dem so ptu lon hon 10
			}
		if ( A[i] < 10)
			{
		       countNho++;  //dem so ptu nho hon 10
			}
}
if (countLon > countNho)
    cout << "So phan tu lon hon 10 nhieu hon" << endl;
else if (countLon < countNho)
    cout << "So phan tu nho hon 10 nhieu hon" << endl;
else
    cout << "So phan tu lon hon 10 bang spo phan tu nho hon 10" << endl;

// sap xep thep thu tu tang dan
cout << "Sap xep phan tu mang A theo thu tu tang dan: ";
 for(int i = 0; i < 50; i++) 
 	{
      for(int j = i + 1; j < 50; j++) 
	  	{
          if(A[i] > A[j])
		  	 {
               int swap = A[i];
               A[i] = A[j];
               A[j] = swap;
              }
        }
       cout << A[i] << " ";
     }
cout << endl;
// them ptu, chen vao mang ma van giu duoc tinh tang dan

int phanTuMoi;
cout << "\t Nhap them phan tu moi vao mang A: "; cin >> phanTuMoi;
cout << endl;
// tao mang moi de chen them phan tu vao mang A1
int A1[50 + 1];
for(int i = 0; i < 50; i++) 
 	{
      A1[i] = A[i];
    }
  // tim vi tri can chen
int index = 50;
for(int i = 49; i >= 0; i--) 
 	{
      if(phanTuMoi > A[i]) 
	  	{
          index--;
 		}
 	}
 // chen phan tu moi vao mang A1
for(int j = 50; j > index; j--) 
 	{
	  A1[j] = A1[j - 1];
 	}
 A1[index] = phanTuMoi;
cout << "Mang moi nhan duoc la A: ";
for(int i = 0; i < 50 + 1; i++) 
 	{
	  cout << A1[i] << " ";
 	}
 cout << endl << endl;

getch();
return 0;
}