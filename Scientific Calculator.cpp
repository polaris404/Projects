/****************************************************************
             'Scientific Calc' by spicymaterial
****************************************************************/
#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

double pi = atan(1)*4;

double arith_func(char, float ,float);
float trig_func(char, float );
float hyperbolic_func(char, float);
float exp_log_func(char, float, float );
float power_func(char, float ,float);

int main()
{
    char choice1,choice2;
    float num1,num2,result;
    while(1)
    {
        system("cls");
        cout<<"1. Arithmetic Functions\n";
        cout<<"2. Trigonometric Functions\n";
        cout<<"3. Hyperbolic Functions\n";
        cout<<"4. Exponential and Logarithmic Functions\n";
        cout<<"5. Power Functions\n";
        cout<<"6. Exit\n\n";
        cout<<"Enter choice : ";
        cin>>choice1;
        system("cls");
        if(choice1=='6')
            break;
        if(choice1=='1')
        {
            double res;
            cout<<"Arithmetic Functions :\n\n";
            cout<<"1. Add\n";
            cout<<"2. Subtract\n";
            cout<<"3. Multiply\n";
            cout<<"4. Divide\n";
            cout<<"5. Modulus\n";
            cout<<"6. Factorial\n";
            cout<<"7. Summation\n";
            cin>>choice2;
            if(choice2=='6'||choice2=='7')
            {
                num2=0;
                cout<<"Enter a number : ";
                cin>>num1;
                res=arith_func(choice2, num1, num2);
                cout<<"\n\nResult : "<<res<<endl;
            }
            else if(choice2=='1')
            {
                double n=0,sum=0;
                cout<<"Enter numbers(Put a '0' at the end) : ";
                do{
                    cin>>n;
                    sum+=n;
                }while(n!=0);

                printf("\n\nResult : %0.3lf\n",sum);
            }
            else if(choice2>'1'&&choice2<='5')
            {
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                res=arith_func(choice2, num1, num2);
                printf("\n\nResult : %0.3lf\n",res);
            }
            else
                cout<<"\nWrong Choice!\n";


        }
        else if(choice1=='2')
        {
            cout<<"Trigonometric Functions :\n\n";
            cout<<"In radians:--\n";
            cout<<"1. sine\n";
            cout<<"2. cosine\n";
            cout<<"3. tangent\n";
            cout<<"4. arc sine\n";
            cout<<"5. arc cosine\n";
            cout<<"6. arc tangent\n";
            cout<<"\nIn degrees:--\n";
            cout<<"7.  sine\n";
            cout<<"8.  cosine\n";
            cout<<"9.  tangent\n";
            cout<<"10. arc sine\n";
            cout<<"11. arc cosine\n";
            cout<<"12. arc tangent\n";
            cin>>choice2;
            if(choice2>'0'&&choice2<='12')
            {
                cout<<"Enter the number : ";
                cin>>num1;
                result=trig_func(choice2, num1);
                printf("\n\nResult : %0.3f\n",result);
            }
            else
                cout<<"\nWrong Choice!\n";

        }
        else if(choice1=='3')
        {
            cout<<"Hyperbolic Functions :\n\n";
            cout<<"In radians:\n";
            cout<<"1. hyperbolic sine\n";
            cout<<"2. hyperbolic cosine\n";
            cout<<"3. hyperbolic tangent\n";
            cout<<"4. arc hyperbolic sine\n";
            cout<<"5. arc hyperbolic cosine\n";
            cout<<"6. arc hyperbolic tangent\n";
            cout<<"\nIn Degrees:\n";
            cout<<"7. hyperbolic sine\n";
            cout<<"8. hyperbolic cosine\n";
            cout<<"9. hyperbolic tangent\n";
            cout<<"10. arc hyperbolic sine\n";
            cout<<"11. arc hyperbolic cosine\n";
            cout<<"12. arc hyperbolic tangent\n";
            cin>>choice2;

            if(choice2>'0'&&choice2<='12')
            {
                cout<<"Enter the number : ";
                cin>>num1;
                result=hyperbolic_func(choice2, num1);
                printf("\n\nResult : %0.3f\n",result);
            }
            else
                cout<<"\nWrong Choice!\n";

        }
        else if(choice1=='4')
        {
            cout<<"Exponential and Logarithmic Functions :\n\n";
            cout<<"1. Exponential (e^x)\n";
            cout<<"2. Log(x) with base 'e'\n";
            cout<<"3. Log(x) with base '10'\n";
            cout<<"4. Log(x) with base 'y'\n";
            cin>>choice2;
            if(choice2=='4')
            {
                cout<<"Enter the numbers(x,y) : ";
                cin>>num1>>num2;
                result=exp_log_func(choice2, num1,num2);
                printf("\n\nResult : %0.3f\n",result);
            }
            else if(choice2>'0'&&choice2<='3')
            {
                num2=0;
                cout<<"Enter the number : ";
                cin>>num1;
                result=exp_log_func(choice2, num1,num2);
                printf("\n\nResult : %0.3f\n",result);
            }
            else
                cout<<"\nWrong Choice!\n";

        }
        else if(choice1=='5')
        {
            cout<<"Power Functions :\n\n";
            cout<<"1. Power(x^y)\n";
            cout<<"2. Square root\n";
            cout<<"3. Cube root\n";
            cin>>choice2;

            if(choice2=='1')
            {
                cout<<"Enter the numbers (x^y) : ";
                cin>>num1>>num2;
                result=power_func(choice2, num1,num2);
                printf("\n\nResult : %0.3f\n",result);
            }
            else if(choice2=='2'||choice2=='3')
            {
                num2 = 0;
                cout<<"Enter the number : ";
                cin>>num1;
                result=power_func(choice2, num1,num2);
                printf("\n\nResult : %0.3f\n",result);
            }
            else
                cout<<"\nWrong Choice!\n";

        }
        else
            cout<<"\nWrong Choice!\n";
        system("pause");
    }
    return 0;
}
double arith_func(char n, float val1,float val2)
{
    double ans;
    double result=1;
    if(n=='2')
        ans = val1-val2;
    else if(n=='3')
        ans = val1*val2;
    else if(n=='4')
        ans = val1/val2;
    else if(n=='5')
        ans = (int)val1%(int)val2;
    else if(n=='6')
    {
        for(int i=val1;i>0;i--)
        {
            result=result*i;

        }
        ans = result;
    }
    else if(n=='7')
    {
        result=0;
        for(int i=val1;i>0;i--)
        {
            result=result+i;
        }
        ans = result;
    }
    return ans;
}

float trig_func(char n, float val)
{
    float ans;
    float deg = (val/180)*pi;
    if(n=='1')
        ans = sin(val);
    else if(n=='2')
        ans = cos(val);
    else if(n=='3')
        ans = tan(val);
    else if(n=='4')
        ans = asin(val);
    else if(n=='5')
        ans = acos(val);
    else if(n=='6')
        ans = atan(val);
    else if(n=='7')
        ans = sin(deg);
    else if(n=='8')
        ans = cos(deg);
    else if(n=='9')
        ans = tan(deg);
    else if(n=='10')
        ans = asin(deg);
    else if(n=='11')
        ans = acos(deg);
    else if(n=='12')
        ans = atan(deg);
    return ans;
}
float hyperbolic_func(char n, float val)
{
    float ans;
    float deg = (val/180)*pi;
    if(n=='1')
        ans = sinh(val);
    else if(n=='2')
        ans = cosh(val);
    else if(n=='3')
        ans = tanh(val);
    else if(n=='4')
        ans = asinh(val);
    else if(n=='5')
        ans = acosh(val);
    else if(n=='6')
        ans = atanh(val);
    else if(n=='7')
        ans = sinh(deg);
    else if(n=='8')
        ans = cosh(deg);
    else if(n=='9')
        ans = tanh(deg);
    else if(n=='10')
        ans = asinh(deg);
    else if(n=='11')
        ans = acosh(deg);
    else if(n=='12')
        ans = atanh(deg);
    return ans;
}
float exp_log_func(char n, float val1, float val2)
{
    float ans;
    if(n=='1')
        ans = exp(val1);
    else if(n=='2')
        ans = log(val1);
    else if(n=='3')
        ans = log10(val1);
    else if(n=='4')
        ans = log10(val1)/log10(val2);
    return ans;
}
float power_func(char n, float val1, float val2)
{
    float ans;
    if(n=='1')
        ans = pow(val1,val2);
    else if(n=='2')
        ans = sqrt(val1);
    else if(n=='3')
        ans = cbrt(val1);
    return ans;
}
