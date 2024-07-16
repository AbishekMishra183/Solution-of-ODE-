#include<stdio.h>
#include<math.h>
float f(float x, float y)
{

    return x-y;

}
void heuns(float x0, float y0,float xn,float h)
{

    float x, y;
    x=x0;
    y=y0;
    printf("\n%f\t %f\t",x,y);
    while(x<xn)
    {
        float m1=f(x,y);
        float m2=f(x+h,y+m1*h);
        y+=h*(m1+m2)/2;
        x+=h;
        printf("\n%f\t%f",x,y);


    }
}
    void euler(float x0, float y0,float xn,float h)
{

    float x, y;
    x=x0;
    y=y0;
    printf("\n%f\t %f\t",x,y);
    while(x<xn)
    {
        float m1=f(x,y);
        float m2=f(x+h,y+m1*h);
        y+=h*(m1);
        x+=h;
        printf("\n%f\t%f",x,y);


    }
}
 void RK4(float x0, float y0,float xn,float h)
{

    float x, y;
    x=x0;
    y=y0;
    printf("\n%f\t %f\t",x,y);
    while(x<xn)
    {
        float m1=f(x,y);
        float m2=f(x+h/2,y+m1*h/2);
        float m3=f(x+h/2,y+m2*h/2);

        float m4=f(x+h/2,y+m3*h/2);

        y+=h*(m1+2*m2+2*m3+m4)/6;
        x+=h;
        printf("\n%f\t%f",x,y);


    }
}
int main()
{

    float x0,y0,xn,h;
    x0=0;
    y0=1;
    xn=2;
    h=0.1;
    printf("\n x\t y");
    printf("this is the solution for henus method:");
    heuns(x0,y0,xn,h);
    printf("\n x\t y");
    euler(x0,y0,xn,h);
    printf("this is the solution for eulers method");
      printf("\n x\t y ");
      printf("this is the solution for the RK4 method :");

      RK4(x0,  y0, xn, h);
        printf("\n x\t y ");

}
