//tinh chu vi, dien tich hinh vuong
#include<stdio.h>
#include<math.h>
main()
{
    float a,chuVi,dienTich;
    printf("Nhap canh hinh vuong: ");
    scanf("%f",&a);
    chuVi=a*4;
    dienTich=a*a;
    printf("Chu vi hinh vuong la: %0.2f\n",chuVi);
    printf("Dien tich hinh vuong la: %0.2f",dienTich);
}
