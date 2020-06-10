#include <stdio.h>
 
 main()
 
 {
    int program;
 	char nama [50]; 
 	float sate,bakso,mie;
 	int jumlah;
  int uang;
 	
 	                     printf("\t \t+==>> SILAHKAN JALANKAN PROGRAM DI BAWAH INI <<==+ \n",program);
 	   
 	                             printf("masukan nama pembeli\t:");
 	                         gets(nama);
 	                           printf("masukan harga sate\t:");
 	                      scanf("%f",&sate);
 	                                 printf("masukan harga bakso\t:");
 	       
			scanf("%f",&bakso);
 	        printf("masukan harga mie\t:");
 	         scanf("%f",&mie);
 	
 	                                          printf("\t \t ==>INILAH PESANAN ANDA<==\n");
 	
         	 printf("pesanan ini terdaftar atas nama :(%s)\n",nama);
                 	 printf("inilah harga sate \t:%.f\n",sate);
 	                        printf("inilah harga bakso \t:%.f\n",bakso);
 	                            printf("inilah harga mie \t:%.f\n",mie);
 	     
 	    jumlah=sate+bakso+mie;
 	    
 	    
 	          printf("TOTAL \t\t\t:%d\n",jumlah);
 	           printf("jika uang %s 100 maka berapa kembalian yang di terima :%s\n",nama,nama);
 	   uang = 100000-jumlah;
 	   
 	    printf("inilah kembalian yang di terima  (%s => %d)",nama,uang);
 	   
 	
 }
