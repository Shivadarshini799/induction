#include <iostream>
using namespace std;
int Palindrome(int num)
{
   
int n, k, rev = 0;
n = num;
while (num != 0)
{
k = num % 10;
rev = (rev * 10) + k;
num /=10;
}
if (n == rev) {
return 1;
}
else {
return 0;
}
}
int main()
{
int num;
cout<<"Enter the number"<<endl;
cin>>num;
while (!Palindrome(num)) {
num = num + 1;
}
cout << "Next Palindrome :";
cout << num;
return 0;
}
