//nhap vao so thuc quy doi ra so nguyen
#include<stdio.h>
#include<math.h>
main()
{
    float soThuc;
    printf("Nhap so thuc: ");
    scanf("%f",&soThuc);
    soThuc=(int)soThuc;
    printf("So nguyen la: %0.0f",soThuc);
}
