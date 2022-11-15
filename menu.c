#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <windows.h>
	 int  ktSN(float number){
	 int num = -1;
	 if(number == (int)number){
	 num =1; 
	 }else{
	 num = -1; 
     } 
	 return num;  
}
	 void ktSNT(int number){
	 int kt = 0;
	 int i = 2 ;
	 for( i; i <= number/2; i++){	
	 if(number%i== 0){
	 kt ++;
     }
}

     if(kt < 1 ){
	 printf("Day la so nguyen to \n");
     }else{
	 printf("Day khong phai la so nguyen to \n");
     }
}
     void ktSoChinhPhuong(int number){
     int kt ; 
     for (int i = 2; i<= number/2; i++){
     if(i * i == number){
     kt = 1;//la chinh phuong
	 break; 
		 } 
	 } 
	 if(kt == 1){
	 printf("La so chinh phuong \n"); 
	 }else{
	 printf("Khong phai so chinh phuong\n "); 
	 } 
	  	
}  
	

	
void chucNang1(){
	

	 float  num  ;
	 system("cls"); 
	 printf("Chuong trinh kiem tra so nguyen \n");
	 scanf("%f",&num); 
	 int ktSoNguyen = ktSN(num) ;
     if(ktSoNguyen > 0){		  
	 printf("Day la so nguyen \n"); 
	 }else{
	 printf("Day khong phai so nguyen \n"); 
     }
	 ktSNT(num) ;
	 ktSoChinhPhuong(num);
		 
 	 
} 

void chucNang2(){
	 system("cls");
	 printf("Uoc chung lon nhat va Boi chung nho nhat \n");
	 int a, b, ucln, bcnn;
	 printf("Nhap vao so a: ");
	 scanf("%d",&a);
	 printf("Nhap vao so b: ");
	 scanf("%d",&b);
	 int a1 = a, b1 = b; // hai bien luu gia tri ban dau a va b
	 if (a == 0) {
	 ucln = b;
	 bcnn = 0; 
	 }else if(b == 0){
	 ucln = a;
	 bcnn = 0; 
	 }else if(a == b){
	 bcnn = a;
	 ucln = a; 
	 } else {
	 while(a != b){
	 if(a > b ){
	 a -= b; 
	 } else {
	 b -= a; 
     } 
     } 
	 ucln = a;
	 bcnn = a1 * b1 /a;
	  
	 } 
	 printf("Boi chung nho nhat cua %d va %d la %d \n",a1, b1, bcnn); 
	 printf("Uoc chung lon nhat cua %d va  %d la %d \n",a1, b1, ucln);
} 
	
void chucNang3(){
	 system("cls");
	 int a, b, tienHat, khuyenMai = 0;
	 printf("Chuong trinh tinh tien karaoke \n"); 
	 do{
	 printf("Nhap vao gio bat dau: ");
	 scanf("%d",&a); 
	 }while(a < 12 || a > 23);
	
	 do{
	 printf("Nhap vao gio ket thuc: ");
	 scanf("%d",&b);
	 }while(b < 12 || b > 23);
	 if ( a > b){
	 int c = a;
	 a = b;
	 b = c; 
	 }
	 printf("Gio bat dau hat: %dh \nGio ket thuc hat: %dh\n", a, b);
	 if(a == b) {
	 	printf("So gio hat la %d \n", a - b);
	 	printf("So tien phai tra la 0 VND \n");
	 } else {
	 	if (a + 3 <b ){
	 	tienHat =  ( b - a) * 150000;
	 } else {
	 	tienHat = 3 *150000 + (b - a - 3) * 150000 * 70 / 100;
	 }
	 if(a >= 14 && a <= 17) {
	 	khuyenMai  = tienHat * 10 /100;
	 }
	 printf("So gio hat la: %dh \n", b - a);
	 printf("So tien hat la: %d VND \n", tienHat);
	 printf("Tien khuyen mai: %d VND \n", khuyenMai);
	 printf("So tien phai tra la: %d VND \n", tienHat - khuyenMai);
}
}
void chucNang4(){
	  system("cls");
	  float bac1= 1678;
	  float bac2= 1734;
	  float bac3= 2014;
	  float bac4= 2536;
	  float bac5= 2834;
	  float bac6= 2927;
	 
	 float sokWh;
	 float tienDien;
	 printf("Nhap vao so dien tieu thu hang thang: ");
	 scanf("%f",&sokWh);
	 
	 if(sokWh < 50){
	 	tienDien = sokWh * bac1;
	 	printf("ban da su dung tu 0-50kwh,so tien ban phai tra la: %.2f\n",tienDien);
	 }else if(sokWh <= 100){
	 	tienDien = 50*bac1+(sokWh - 50)*bac2;//tru 50  cua bac 1 se ra cua bac 2 * cho bac 2 
		 printf("ban da su dung tu 51-100kwh,so tien ban phai tra la: %.2f\n", tienDien);	
	 }else if(sokWh <= 200){
	 	tienDien = 50*bac1+(50*bac2)+(sokWh - 100)*bac3;
		 printf("ban da su dung tu 101-200kwh,so tien ban phai tra la: %.2f\n", tienDien);	 	
	 }else if(sokWh <= 300){
	 	tienDien = 50*bac1+(50*bac2)+(100*bac3)+(sokWh - 200)*bac4;
	 	printf("ban da su dung tu 201-300kwh,so tien ban phai tra la: %.2f\n", tienDien);
	 }else if(sokWh <= 400){
	 	tienDien =  50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+(sokWh -300)*bac5;
	 	printf("ban da su dung tu 301-400kwh,so tien ban phai tra la: %.2f\n", tienDien);
	 }else if(sokWh <= 500){
	 	tienDien =  50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+(100*bac5)+(sokWh - 400)*bac6;
	 	printf("ban da su dung tu 401-500kwh,so tien ban phai tra la: %.2f\n", tienDien);
	 }
	  
	  
}
void chucNang5(){
	
}
void chucNang6(){
}
void chucNang7(){
}
void chucNang8(){
}
void chucNang9(){
}
void chucNang10(){
}
	
int main(){
	int cn;
	do{
		printf("**-------------------------Cac chuc nang--------------------------** \n");
		printf("**1. Kiem tra so nguyen                                           ** \n");
		printf("**2. Tim uoc so chung va boi so chung cua 2 so                    ** \n");
        printf("**3. Chuong trinh kiem tien cho quan karaoke                      ** \n");
        printf("**4. Tinh tien dien                                               ** \n");
        printf("**5. Chuc nang doi tien                                           ** \n");
        printf("**6. Xay dung chuc nang tinh lai xuat vay ngan hang vay tra gop   ** \n");
        printf("**7. Xay dung chuong trinh vay tien mua xe                        ** \n");
        printf("**8. Sap xep thong tin sinh vien                                  ** \n");
        printf("**9. Xay dung game FPOLY - LOOT (2/15)                            ** \n");
        printf("**10. Xay dung chuong trinh tinh toan phan so                     ** \n");
        printf("**----------------------------------------------------------------**\n"); 
        printf("Moi ban chon [1-10]: ");
        system("Color 03");
        scanf("%d",&cn); 
        switch(cn){
        	case 1:
			       chucNang1();
			       break;
			case 2:
				   chucNang2();
				   break;
			case 3:	   
				   chucNang3();
				   break;
			case 4:
				   chucNang4();
				   break;
			case 5:
				  chucNang5();
				  break;
			case 6:
				  chucNang6();
				  break;
			case 7:
			 	  chucNang7();
				  break;
			case 8:	  
				  chucNang8();
				  break;
			case 9:
				  chucNang9();
				  break;
			case 10:
				   chucNang10();
				   break;
			default:
				if(cn == 11){
				printf("Nhap khong hop le\n");
			}
			}
	}while (cn !=11);
	return 0;
}
