//Tinh chu vi, dien tich hinh thang
#include<stdio.h>
#include<math.h>
main()
{
    float dayBe,dayLon,canhBenThu1,canhBenThu2,chieuCao,chuVi,dienTich;
    printf("Nhap day be, day lon, canh ben thu 1, canh ben thu 2, chieu cao : ");
    scanf("%f%f%f%f%f",&dayBe,&dayLon,&canhBenThu1,&canhBenThu2,&chieuCao);
    chuVi=dayBe+dayLon+canhBenThu1+canhBenThu2;
    dienTich=((dayBe+dayLon)*chieuCao)/2;
    printf("Chu vi hinh thang la: %0.2f\n",chuVi);
    printf("Dien tich hinh thang la: %0.2f",dienTich);
}
