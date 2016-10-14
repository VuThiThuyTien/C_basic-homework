//tinh chu vi, dien tich hinh tron
#include<stdio.h>
#include<math.h>
main()
{
    float R,chuVi,dienTich;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f",&R);
    chuVi=2*3.14*R;
    dienTich=(3.14*3.14)*R;
    printf("Chu vi hinh tron la: %0.2f\n",chuVi);
    printf("Dien tich hinh tron la: %0.2f",dienTich);
}

