//例5.3 编写程序，用起泡法对10个数排序(按由小到大顺序)。
#include <iostream>
using namespace std;
int main( )
{
  const int n=4;
  string a[n+1］;// asd asfgsfg ertetr 1  fghfgh 
  int i,j,t;
  cout<<"input n strings ："<<endl;
  for (i=1;i<=n;i++)                       //输入a［1］~a［10］
    cin>>a［i］;
  cout<<endl;
  for (j=1;j<=n-1;j++)                      //共进行9趟比较
    for(i=1;i<=n-j;i++)                  //在每趟中要进行(10-j)次两两比较
       if (a［i］>a［i+1］)                   //如果前面的数大于后面的数
   {t=a［i］;a［i］=a［i+1］;a［i+1］=t;}   //交换两个数的位置，使小数上浮
  cout<<"the sorted numbers ："<<endl;
  for(i=1;i<n+1;i++)                      //输出10个数
    cout<<a［i］<<"   ";
  cout<<endl;
  system("pause");
  return 0;
}
  
  