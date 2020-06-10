#include <stdio.h>
main()
{

	float buku, pensil, kertas;
	char nama[50];
	char toko[50];
	int jumlah;
	int kembalian;

	printf("\t \t ==>SELAMAT DATANG DI TOKO KAMI<==\n");
	printf("KAMI MEMILIKI BEBERAPA PRODUK YAITU BUKU PENSIL DAN KERTAS\n");
	printf("\t \t SILAHKAN MASUKAN NAMA TOKO KAMI :\n");

	gets(toko);
	printf("SILAHKAN MASUKAN NAMA ANDA :");
	gets(nama);

	printf("masukan harga barang yang ingin anda beli :");
	scanf("%f", &buku);
	printf("masukan harga barang yang ingi anda beli :");
	scanf("%f", &pensil);
	printf("masukan harga barang yang ingin anda beli :");
	scanf("%f", &kertas);

	printf("\t \t BERIKUT ADALAH DAFTAR BELANJAAN ANDA \n");

	printf("NAMA TOKO\t:(%s)\n", toko);
	printf("TERDAFTAR ATAS NAMA\t:(%s)\n", nama);
	printf("HARGA BUKU\t:(%.f)\n", buku);
	printf("HARGA PENSIL\t:(%.f)\n", pensil);
	printf("HARGA KERTAS :(%.f)\n", kertas);

	jumlah = buku + pensil + kertas;
	printf("=============================\n");
	printf("TOTAL\t:%d\n", jumlah);
	printf("=============================\n");

	kembalian = jumlah - 100000;
	printf("KEMBALIAN YANG DI TERIMA =>(%s)\t%d\n", nama, kembalian);
}
