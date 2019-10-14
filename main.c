#include <stdio.h>
#include <string.h>

int main(int   argc, char *argv[])
{
  char certificado[10];

	if (argc > 3) {
		if (sprintf(certificado, "%s", argv[3]) < 0) {
			//oops
		}
		printf("\n\n[%s]\n\n", certificado);
  }
}
