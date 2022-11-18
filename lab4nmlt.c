#include <stdio.h>
#include <windows.h>
void chucNang1(){
	// nhap vao min va max 
	//  Tinh trung binh cong cac so chia het cho 2
	// trong doan min den max
	system("cls"); 
	int min, max;
	printf("Nhap Min = ");
	scanf("%d", &min);
	printf("Nhap Max = ");
	scanf("%d", &max);
 	int tong = 0;
 	int dem = 0;
 	int i = min;
 	while(i<=max){
 		if(i%2==0){
 			tong+=i;
 			dem++;
		 }
		 i++;
	
	 }
	 printf("Trung binh = %f\n", (float)(tong/dem));
}
void chucNang2(){
	system("cls"); 
int i, x, count = 0; 
printf("Nhap vao x can kiem tra: ");
scanf("%d", &x); 
for ( i = 2; i < x; i++){ // chay khong toi x vi dau < hon x //i++ de dam bao vong lap co the thoat ra dc 
	if(x % i == 0)
	{
		count++;// kiem tra gia tri de su dung ham esle  
	}
}
if (count == 0){
	printf("%d la so nguyen to\n",x);
}else{
	printf("%d khong phai la so nguyen to\n",x);
}
}


void chucNang3(){
	system("cls"); 
	int x, i, count = 0;
	printf("Nhap vao x  can  kiem tra: ");
	scanf("%d", &x);
	for (i = 1; i < x; i++){
		if(i * i == x){
			printf("%d la so chinh phuong\n", x);
		
			break;
		}
	} 
	if(i == x){
		printf("%d khong phai la so chinh phuong\n");
		
	}
} 
int main(){
	int cn;
	do{
		printf("**-------------------------Cac chuc nang--------------------------** \n");
		printf("**1. Tinh trung binh tong cua cac so tu nhien chia het cho 2      ** \n");
		printf("**2. Chuong trinh xac dinh so nguyen to                           ** \n");
        printf("**3. Chuong trinh so chinh phuong                                 ** \n");
        printf("**4. Thoat                                                        ** \n");
        printf("**----------------------------------------------------------------**\n"); 
     	printf("Moi ban chon [1-4]: ");
        system("color 03");
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
                  exit(0);
			      break;
	 default:
		printf("Nhap khong hop le\n");
			}
			}while (cn !=4);
}

	
 
