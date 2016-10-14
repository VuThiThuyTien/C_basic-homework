//tinh chu vi, dien tich tam giac
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,p,chuVi,dienTich;
    printf("Nhap ba canh cua tam giac: ");
    scanf("%f%f%f",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
    {
        chuVi=a+b+c;
        p=(a+b+c)/2;
        dienTich=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Chu vi tam giac la: %0.2f\n",chuVi);
        printf("Dien tich tam giac la: %0.2f",dienTich);
    }
    else
        printf("3 canh tren khong tao thanh tam giac");
}
