#include <stdio.h>
#include <math.h>
#define pi 3.14125926

int main()
{
    int p1x,p1y,p2x,p2y,p3x,p3y;
    double p12,p23,p13,p1,p2,p3;

    scanf("%d %d %d %d %d %d",&p1x,&p1y,&p2x,&p2y,&p3x,&p3y);

    p12=sqrt((p1x - p2x)*(p1x - p2x) + (p1y - p2y)*(p1y - p2y));

    p23=sqrt((p2x - p3x)*(p2x - p3x) + (p2y - p3y)*(p2y - p3y));

    p13=sqrt((p1x - p3x)*(p1x - p3x) + (p1y - p3y)*(p1y - p3y));

    p1=acos((p12*p12 + p13*p13 - p23*p23) / (2 * p12 * p13));

    p2=acos((p23*p23 + p12*p12 - p13*p13) / (2 * p12 * p23));

    p3=acos((p23*p23 + p13*p13 - p12*p12) / (2 * p23 * p13));

    p1=(p1*180)/pi;
    p2=(p2*180)/pi;
    p3=(p3*180)/pi;

    printf("%lf %lf %lf\n",p1,p2,p3);

    main();
    return 0;
}
