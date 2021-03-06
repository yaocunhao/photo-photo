//给你一根长度为 n 的绳子，请把绳子剪成整数长度的 m 段（m、n都是整数，n>1并且m>1），每段
//绳子的长度记为 k[0],k[1]...k[m - 1] 。请问 k[0]*k[1]*...*k[m - 1] 可能的最大乘积是多少？例
//如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。
//答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。
//
//思路：和剪绳子1思路是一样的，尽量多的分为3段，唯一的区别是需要注意边界的问题


#include <stdio.h>

int cuttingRope(int n)
{
  long long ret=1;
  int num=1000000007;

  if(n==2)
    return 1;//1+1=2;
  if(n==3)
    return 2;//1+2=3

  while(n>5)
  {
    ret%=num;
    ret*=3;
    n-=3;
  }
  ret%=num;
  ret*=n;
  ret%=num;
  return ret;
}

