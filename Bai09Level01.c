//Nhap vao so ngay, quy doi ra thang nam
#include<stdio.h>
#include<math.h>
main()
{
    int ngay;
    printf("Nhap so ngay: ");
    scanf("%d",&ngay);
    printf("%d nam %d thang",ngay/365,(ngay%365)/30);
}
