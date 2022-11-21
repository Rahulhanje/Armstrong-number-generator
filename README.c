# Armstrong-number-generator#include <stdio.h>
#include <math.h>
int many_digit(int n)
{
    int a = 0;
    for (int i = 0; n > 0; i++)
    {
        n = n / 10;
        a++;
    }
    return a;
}
int main()
{
    int n, m;
    printf("Enter the number range by giving space : ");
    scanf("%d %d", &n, &m);
    int Dublicate_of_N = n;
    int q;
    int ans = 0, Single_digit;
    printf("anstrome numbers are in range of %d to %d\n",n,m);
    for (q = Dublicate_of_N; q <= m; q++)
    {   n=q;
        int power = many_digit(q);
        for (int i = 0; n > 0; i++)
        {
            Single_digit = n % 10;
            ans += pow(Single_digit, power);
            n = n / 10;
        }
        if (q == ans)
        {
            printf("  %d  ", q);
            ans=0;
        }
        else{
            ans=0;
        }
    }
  
    return 0;
 
}
