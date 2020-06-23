#include<iostream>
using namespace std;
main(){
 
int A[11]={1,82,4,11,29,5,20,11,8,10,3},i,j,tampung;
 
printf("Sebelum sorting : \n");
for (i=0;i<=10;i++){
printf("%i ",A[i]);
}
 
for(i=0;i<5;i++){
for(j=4;j>=i;j--){
if(A[j]<A[j-1]){
tampung=A[j];
A[j]=A[j-1];
A[j-1]=tampung;
}
}
}
 
cout << "   \n\nAscending Sort : \n\n";

        for(int i=0; i<=10; i++)
            {
                for(int j=i+1; j<=10; j++)
                    {
                        if(A[i]>A[j])
                            {
                                tampung=A[i];
                                A[i]=A[j];
                                A[j]=tampung;
                            }
                    }
                cout << "- " << A[i] << "\n";
            }
cout << "\n  Descending Sort : \n\n";

        for(int i=0; i<=10; i++)
            {
                for(int j=i+1; j<=10; j++)
                    {
                        if(A[i]<A[j])
                            {
                                tampung=A[j];
                                A[j]=A[i];
                                A[i]=tampung;
                            }
                    }
                cout << "- " << A[i] << "\n";
            }
}
