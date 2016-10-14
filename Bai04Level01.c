//tinh chu vi, dien tich hinh chu nhat
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,chuVi,dienTich;
    printf("Nhap 2 canh hinh chu nhat: ");
    scanf("%f%f",&a,&b);
    chuVi=(a+b)*2;
    dienTich=a*b;
    printf("Chu vi hinh chu nhat la: %0.2f\n",chuVi);
    printf("Dien tich hinh chu nhat la: %0.2f",dienTich);
}
