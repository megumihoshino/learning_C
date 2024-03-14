#include <stdio.h>

int main(){
    /*kategori pria dan wanita dewasa*/
    float berat_badan, tinggi_badan, BMI; 
    char pria, wanita;

    /*masukkan berat badan (kg) dan tinggi badan (m)*/
    printf("masukkan berat badan (kg):  ");
    scanf("%f\n kg", &berat_badan);

    printf("masukkan tinggi badan (m):  ");
    scanf("%f\n m", &tinggi_badan);

    /*klasfikasi jenis kelamin*/
    printf("masukkan jenis kelamin: ");
    scanf("%c \n", &pria);
    scanf("%c \n", &wanita);

    /*menghitung BMI*/
    BMI = berat_badan/(tinggi_badan*tinggi_badan);
    printf("BMI Anda ialah: %.2f\n", BMI);

    /*menentukan kategori BMI*/
    if (BMI <= 18.5)
    {
        printf("Berat badan kurang. Perbanyak nutrisi! \n");
    }

    else if (BMI > 18.5 && BMI <= 24.9)
    {
        printf("Berat badan Anda normal\n");
    }

    else if (BMI > 24.9 && BMI == 29.9)
    {
        printf("Anda kelebihan berat badan. Hayoo diet..\n");
    }

    else{
        printf("Anda obesitas. Segera periksa ke dokter untuk penanganan lbh lanjut.\n");
    }
    

return 0;
}