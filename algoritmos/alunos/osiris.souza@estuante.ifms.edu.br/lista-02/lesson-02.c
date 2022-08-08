// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// função principal
int main()
{

  int valueLado;

  printf("Digite o valor do lado: ");
  scanf("%i", &valueLado);

  int perimetro = 4 * valueLado;
  int area = valueLado * valueLado;
  int diagonal = sqrt(pow(valueLado, 2));

  printf("O valor do paerimetro foi: %i \nO Valor da area foi: %i \nO valor da diagonal foi: %i",
         perimetro,
         area,
         diagonal);
}

/*

  IGNORE ISSO.

  Github Page: https://github.com/ifmscb-ads-turma-1229/
  Download do compilador C C++: https://sourceforge.net/projects/orwelldevcpp/

  from vscode
  Install vscode: https://code.visualstudio.com/
  Install Plugins: ms-vscode.cpptools , danielpinto8zz6.c-cpp-compile-run.

  Install MinGW: https://osdn.net/projects/mingw/
  full tutorial: https://www.youtube.com/watch?v=vLC1fPid2E4

  Add to enverable on windows: on tuturial.

*/
