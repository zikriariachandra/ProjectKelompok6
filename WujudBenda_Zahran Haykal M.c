/*Program: WujudBenda_Zahran Haykal M.c
 *Deskripsi: Menentukan wujud suatu benda jika diketahui suhunya
 *Nama: Zahran Haykal Mubarok
 *Tanggal/versi : 6 November 2017/1
 *Compiler: Dev C
 */
 
 #include <stdio.h>
 
 int main() {
 	/*Kamus Data*/
 	float suhu;
 	
 	/*Algoritma*/
 	((-150<suhu) && (suhu<=150));
 	scanf("%f",&suhu);
 	
 	if ((suhu>=0) && (suhu<=100)) {
 		printf("berwujud cair\n");
	 } else {
	 	printf("berwujud non cair\n");
	 }
	 return 0;
 }
