#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int   argc, char *argv[])
{
  char certificado[10];
  char comando[10];
	
	if (argc > 3) {
		if (sprintf(certificado, "%s", argv[3]) < 0) {
			//oops
		}
		char *fmt = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa%s";
		if (sprintf(certificado, fmt, argv[3]) < 0) {
			//oops
		}
		printf("\n\n[%s]\n\n", certificado);
		int a = atoi(argv[2]);
		if (sprintf(comando, "check_mysql %s", argv[0]) < 0) {
			//?
		}
		int ret_val = system(comando);
  }
}
