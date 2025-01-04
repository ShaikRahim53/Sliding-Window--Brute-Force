#include<bits/stdc++.h>
using namespace std;
int main(){
   int numberOfElements,windowSize,numberOfSubArrays,sumOfSubArrayElements=0,subArrayIndex=0;
   cin >> numberOfElements;
   cin>>windowSize;
   numberOfSubArrays = numberOfElements-windowSize+1;
   int originalArray[numberOfElements];
   int subArraySum[numberOfSubArrays];
   for(int i=0;i<numberOfElements;i++)
   {
       cin>>originalArray[i];
   }
   for(int i=0;i<numberOfElements-windowSize+1;i++)
   {
     for(int j=i;j<i+windowSize;j++)
     {
        sumOfSubArrayElements += originalArray[j];
     }
     subArraySum[subArrayIndex++] = sumOfSubArrayElements;
     sumOfSubArrayElements=0;
     //cout<<subArraySum[subArrayIndex]<<" ";
     //if( arr[i+window_size-1] == arr[n-1])
        //break;
   }
   int maximumSubArrayElement = subArraySum[0];

   for(int i=1;i<subArrayIndex;i++)
   {
      if (subArraySum[i]>maximumSubArrayElement)
      {
         maximumSubArrayElement = subArraySum[i];
      }
   }
  cout<<maximumSubArrayElement;
  
}
