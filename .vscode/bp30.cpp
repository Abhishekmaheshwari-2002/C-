//program for  sum of n natural number and  sum of squre of n natural number
#include <iostream>
using namespace std;
int main()
{
   int n, sum = 0, x, s = 1;// sum =0  thats why because of to get sum of n natural number 
   cout << "Enter the number " << endl;
   cin >> n;
   
   cout << "Enter the number of x " << endl;
   cin >> x;

   for (int i = 1; i <= n; i++)
   {
      sum = sum + i;// it is a condition of sum of n natural number 
      s = s * x;// it is a  condition of sum of squre  n natural number 
   }
   cout << " The sum of " << n << " natural number  is : " << sum << endl;
   cout << " The sum of squre of " << n << " natural number  is : " << s << endl;
   return 0;
}