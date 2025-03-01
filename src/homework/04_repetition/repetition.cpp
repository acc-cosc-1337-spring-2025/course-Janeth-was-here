//add include statements

//add function(s) code here
int factorial(int num)
{
    int result = 1;
    for (int i = 2; i <= num; i++)
        result *= i;
    return result;
}
int gcd(int num1, int num2)
{
    while (num2 != 0) 
    {
        int newnum = num2;
        num2 = num1 % num2;
        num1 = newnum;
    }
    return num1;
}