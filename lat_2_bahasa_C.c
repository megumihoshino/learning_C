<CONT'D>

#SEARCHING-SEQUENTIAL SEARCH
(nyari nilai di dalam sebuah array, letaknya di indeks ke brp)

/*menentukan posisi di mana elemen tabel bernilai x*/
/*di sini kiita akan mencari nilai x = 800, dimn nnti outputnya bernilai 5 
artinya terletak di indeks ke-5*/

#include<stdio.h>
int main()
{
    int i;
    int Tab[8] = {3, 67, 56, 125, 90, 800, 2711, 76};
    int x = 800; /*we wants to find the value 800*/

    /*the algorithm*/
    i = 0;
    while((Tab[i]!=x) && (i<7)){
        i++;
    } /*tab[i]==x or i=9*/
    if(Tab[i]==x){
        printf("indeks bernilai x=%d", i);
    }
    else{
        printf("nilai tdk ditemukan");
    }

    return 0;

}


output: indeks bernilai x=5[1] +done

#FUNGSI PENJUMLAHAN

/*fungsi yang menjumlahkan nilai a+b*/


#include<stdio.h>


    int add(int a, int b){
    /*fungsi bernama add, utk menerima dan mengirimkan
    hasil penjmlhan a+b*/
    return (a+b);
    }

    int increment (int a){
        return(a+1);
    }

    int main(){
        int x = 100;
        int y = 78;

        /*pemakaian fungsi add*/
        printf("nilai x+y =%d\n", add(x,y));
        printf("hasil penjumlahan 3+2 =%d\n", add(3,2));

        /*pemakaian/pemanggilan fungsi increment*/
        printf("nilai x: %d\n", x);
        printf("nilai x stlh ditmbh 1: %d\n", increment(x));
        printf("nilai 5 stlh ditmbh 1: %d\n", increment(5));


        return 0;
    }


    
output: nilai x+y =178
hasil penjumlahan 3+2 =5
nilai x: 100
nilai x stlh ditmbh 1: 101
nilai 5 stlh ditmbh 1: 6

<jd di sini mksdnya, si x dan y jg ngikutin rumus fungsi a+b, otomatis. ga usah inisialisasi x+y lagi, krn lnsgng ngikutin yg a+b.


#PROGRAM UTK MENUKAR NILAI

/*cth program utama dan prosedur utk menukar dua buah nilai*/


#include<stdio.h>

void plus1(int* a){
    /*prosedur menambahkan 1 ke parameter a*/
    /* *a artinya isi dari lokasi yg ditunjuk oleh a*/
    int temp;
    *a = *a+1;
}

void plusd (int* a, int d){
    /*prosedur menambahkan d ke parameter a*/
    /*nilai a akn diubah sedangkan nilai d tdk akan diubah*/

    int temp;
    *a = *a+d;

}

void swap(int* a, int* b){
    /*prosedur menukar nilai dua buah variable a dan b*/
    /* *a artinya isi dari lokasi yg ditunjuk oleh *a */
    int temp;
    temp = (*a); *a=(*b); *b=temp;
}

int main() {
    int i = 90;
    int x = 134;
    int y = 456;
    int d = 1000;

    plus1(&i); /*perhatikan saat pemanggilan i*/
    printf("nilai i+1: %d\n", i);

    i = 2;
    plusd(&i, d); /*perhatikan saat pemanggilan &i dan d*/
    printf("nilai i+1000: %d\n", i);

    plusd(&d, 3); 
    printf("nilai d+3: %d\n", d);

    printf("nilai x dan y : %d\n", x,y);
    swap(&x, &y);
    printf("nilai x dan y setelah swap: %d\n", x, y);
    return 0;
}


output: 
nilai i+1: 91
nilai i+1000: 1002
nilai d+3: 1003
nilai x dan y : 134
nilai x dan y setelah swap: 456
