#include<stdlib.h>
#include<stdio.h>
#include<math.h>
//system("clear") serve para limpar a tela
//printf serve para mostrar clgo na tela
//scanf seve para salvar algum valor com a variavel, como scanf("%d", &a), salva o valor em "a"
//for serve para gerar ciclos
//switch serve para formar casos de cada valor inteiro de uma variavel, como switch(a) e case 1, ou seja, quando "a" tem o valor de 1 ela faz o caso 1
//break serve para parar um case no switch
//if e else serve para analisar casos, como if(a>5){ ... }, else{ ... }, se a for maior que 5 ele faz o if, senao faz o else
//muitas vezes nao tem comentarios no programa, pois o assunto foi comentado anteriormente, como em subtracao de matrizes, que ja foi comentado em soma de matrizes
//nos "for" das matrizes comecam em 1, para ser semelhante quando estudado em matematica, onde o primeiro termo eh 1x1, e nao 0x0
int main(){
    char caracter1, caracter2;//para os menus
    int a, b, bb, c, d, i, ii, j, jj, n, m, p, w, v, result, erro;//para as contas
    int a1, a2, b1, b2, c1, c2;
    float resultx, resulty;
    int resultadofinal1, resultadofinal2, resultadofinal3, resultadofinal4, resultadofinal;
    float resultado;
for (w=2; w>1; w++){//ciclo infinito, mas facil de sair
    system("cls");//limpa a tela
    //o que eh mostrado na tela
        printf("\n***** Menu da calculadora *****\n\n");
        printf(".1. para operacoes basicas.\n");
        printf(".2. para operacoes de matrizes.\n");
        printf(".3. para volumes.\n");
        printf(".4. para resolver equacoes.\n");
        printf(".5. para sair.\n");
        printf("digite sua opcao ==> ");
        scanf("%c", &caracter1);
        bb = caracter1;

switch (bb){//para cada caso do menu
        case 49://nao eh case 1 pois 49 eh o valor do caracter 1
                    for(i=2 ; i>1 ; i++){//ciclo infinito para o menu secundario
                        system("cls");
                        printf("\n*** Calculadora basica ***\n\n");
                        printf(".1. para somar.\n");
                        printf(".2. para subtrair.\n");
                        printf(".3. para multiplicar.\n");
                        printf(".4. para dividir.\n");
                        printf(".5. para x^2.\n");
                        printf(".6. para voltar ao menu principal.\n");
                        printf("digite aqui sua opcao ==> ");
                        scanf("%c", &caracter2);
                        c = caracter2;
                            switch(c){
                                case 49:
                                    system("cls");
                                    printf("soma\n");
                                    printf("a+b\n");//mostra como sera a conta
                                    printf("digite a==> ");//para ser digitado o valor de a
                                    scanf("%d", &a);
                                    printf("digite b ==> ");
                                    scanf("%d", &b);
                                    result = a + b;//conta da soma
                                    printf("%d+%d=%d\n\n\n", a, b, result);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    break;
                                case 50:
                                    system("cls");
                                    printf("subtracao\n");
                                    printf("a-b\n");
                                    printf("digite a ==> ");//para ser digitado o valor de a
                                    scanf("%d", &a);
                                    printf("digite b ==> ");
                                    scanf("%d", &b);
                                    result = a - b;//conta
                                    printf("%d-%d=%d\n\n\n", a, b, result);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    break;
                                case 51:
                                    system("cls");
                                    printf("multiplicacao");
                                    printf("\na*b\n");
                                    printf("digite a ==> ");
                                    scanf("%d", &a);
                                    printf("digite b ==> ");
                                    scanf("%d", &b);
                                    result = a * b;
                                    printf("%d*%d=%d\n\n\n", a, b, result);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    break;
                                case 52:
                                    system("cls");
                                    for (;;){
                                        printf("divisao\n");
                                        printf("digite a ==> ");
                                        scanf("%d", &a);
                                        printf("digite b ==> ");
                                        scanf("%d", &b);
                                        if (b == 0){//pois nao existe n/0
                                            printf("digite um valor para b diferente de 0\n");
                                        }
                                        else{
                                            resultado = (float) a / b;
                                            printf("%d/%d=%f\n\n\n", a, b, resultado);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                            break;
                                        }
                                    }
                                    break;
                                case 53:
                                    system("cls");
                                    printf("x²\n");
                                    printf("digite x ==> ");
                                    scanf("%d", &a);
                                    result = a * a;
                                    printf("%d^2=%d\n\n\n", a, result);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    break;
                                case 54:
                                    i=0;//para sair do menu secundario
                                    printf("\n\n");
                                    system("clear");
                                    break;
                                default:
                                    printf("\ndigite uma opcao valida.\n\n\n");
                            }//swich da calculadora normal
                        }
        break;
                //fim do case 1.
    case 50:
        system("cls");
                    for(i=2 ; i>1 ; i++){//para o menu secundario
                        system("cls");
                        printf("\n*** Calculadora de matrizes *** \n\n");
                        printf(".1. para somar duas matrizes\n");
                        printf(".2. para subtrair duas matrizes\n");
                        printf(".3. para multiplicar matrizes.\n");
                        printf(".4. para elevar os termos de uma matriz ao quadrado.\n");
                        printf(".5. para calcular a determinante de matriz.\n");
                        printf(".6. para matriz transposta\n");
                        printf(".7. para voltar ao menu principal.\n");
                        printf("digite aqui sua opcao ==> ");
                        scanf("%c", &caracter2);
                        c = caracter2;
                        switch(c){
                        case 49:{
                                system ("cls");
                                printf("**soma de matrizes**\n");
                                printf("\ndigite a quantidade de linhas das matrizes ==> ");
                                scanf("%d", &a);
                                printf("\ndigite a quantidade de colunas das matrizes ==> ");
                                scanf("%d", &b);

                                int matrixum[a][b], matrixdois[a][b], matrixresult[a][b];//o int esta aqui pois sao matrizes que podem variar
                                system("cls");
                                printf("\ndigite os valores da matriz 1: \n");
                                for (i=1;i<a+1; i++){//for para as linhas da matriz
                                    for(j=1; j<b+1; j++){//for para as colunas da matriz
                                        printf("\nvalor de (%d)(%d) ==> ", i, j);//colocar os valores da matriz
                                        scanf("%d", &matrixum[i][j]);
                                    }
                                }
                                printf("\ndigite os valores da matriz 2: \n");
                                for (i=1; i<a+1;i++){
                                    for(j=1;j<b+1;j++){
                                       printf("\nvalor de (%d)(%d) ==> ", i, j);
                                       scanf("%d", &matrixdois[i][j]);
                                    }
                                }
                                system("cls");
                                printf("\na matriz um eh: \n");//mostrar a matriz 1
                                for (i=1;i<a+1; i++){
                                    for(j=1; j<b+1; j++){
                                        printf("%d   ", matrixum[i][j]);//para mostrar a matriz
                                    }
                                    printf("\n");
                                }
                                printf("\na matriz dois eh: \n");
                                for (i=1; i<a+1;i++){
                                    for(j=1;j<b+1;j++){
                                       printf("%d   ", matrixdois[i][j]);
                                    }
                                    printf("\n");
                                }
                                for (i=1; i<a+1; i++){
                                    for(j=1; j<b+1; j++){
                                    matrixresult[i][j] = matrixum[i][j] + matrixdois[i][j];//conta para somar os valores das matrizes
                                    }
                                }
                                printf("\na matriz resposta eh: \n");
                                for (i=1; i<a+1;i++){
                                    for(j=1;j<b+1;j++){
                                       printf("%d   ", matrixresult[i][j]);//mostrar a matriz resposta
                                    }
                                    printf("\n");
                                }
                                printf("\ndigite algo para continuar: ");
                                scanf("%d", &erro);
                                break;
                                }
                        case 50:{
                                system ("cls");
                                printf("**subtracao de matrizes**\n");
                                printf("\ndigite a quantidade de linhas das matrizes ==> ");
                                scanf("%d", &a);
                                printf("\ndigite a quantidade de colunas das matrizes ==> ");
                                scanf("%d", &b);

                                int matrixum[a][b], matrixdois[a][b], matrixresult[a][b];
                                system("cls");
                                printf("\ndigite os valores da matriz 1: \n");
                                for (i=1;i<a+1; i++){
                                    for(j=1; j<b+1; j++){
                                        printf("\nvalor de (%d)(%d) ==> ", i, j);
                                        scanf("%d", &matrixum[i][j]);
                                    }
                                }
                                printf("\ndigite os valores da matriz 2: \n");
                                for (i=1; i<a+1;i++){
                                    for(j=1;j<b+1;j++){
                                       printf("\nvalor de (%d)(%d) ==> ", i, j);
                                       scanf("%d", &matrixdois[i][j]);
                                    }
                                }
                                system("cls");
                                printf("\na matriz um eh: \n");
                                for (i=1;i<a+1; i++){
                                    for(j=1; j<b+1; j++){
                                        printf("%d   ", matrixum[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\na matriz dois eh: \n");
                                for (i=1; i<a+1;i++){
                                    for(j=1;j<b+1;j++){
                                       printf("%d   ", matrixdois[i][j]);
                                    }
                                    printf("\n");
                                }
                                for (i=1; i<a+1; i++){
                                    for(j=1; j<b+1; j++){
                                    matrixresult[i][j] = matrixum[i][j] - matrixdois[i][j];//unica diferenca da soma de matrizes
                                    }
                                }
                                printf("\na matriz resposta eh: \n");
                                for (i=1; i<a+1;i++){
                                    for(j=1;j<b+1;j++){
                                       printf("%d   ", matrixresult[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\ndigite algo para continuar: ");
                                scanf("%d", &erro);
                                break;
                                }
                        case 51:{
                                        system("cls");
                                        printf("\n** Multiplicacao de matrizes **\n");
                                        //aqui serve para falar quantas linhas e colunas tem as duas matrizes
                                        printf("\ndigite quantas linhas tem a matrix 1 ==> ");
                                        scanf("%d", &n);
                                        printf("\ndigite quantas colunas tem a matrix 1 ==> ");
                                        scanf("%d", &m);
                                        //lembrando que para ocorrer a multiplicacao de duas matrizes, a quantidade de colunas da primeira
                                        // deve ter a msm quantidade de linhas da segunda
                                        printf("\nmatrix 2 tem %d linhas\n", m);
                                        printf("\ndigite quantas colunas tem a matrix 2 ==> ");
                                        scanf("%d", &p);
                                        system("clear");
                                        printf("\nmatriz um eh: %dx%d", n, m);
                                        printf("\nmatriz dois eh: %dx%d\n", m, p);
                                        int matrixum[n][m], matrixdois[m][p], matrixresult[n][p];
                                        //colocar valores nas matrizes
                                        for (a=1 ; a<n+1 ; a++){
                                            for (b=1 ; b<m+1 ; b++){
                                                printf("\ndigite o valor de (%d)(%d)==> ", a, b);//para colocar os valores da matriz
                                                scanf("%d", &matrixum[a][b]);
                                            }
                                        }
                                        for (b=1 ; b<m+1 ; b++){
                                            for (d=1 ; d<p+1 ; d++){
                                                printf("\ndigite o valor de (%d)(%d)==> ", b, d);
                                                scanf("%d", &matrixdois[b][d]);
                                            }
                                        }
                                        system("cls");
                                        //mostrar as duas matrizes
                                        printf("\nmatrix 1: \n");
                                        for (a=1 ; a<n+1 ; a++){
                                            for (b=1 ; b<m+1 ; b++){
                                                printf("%d   ", matrixum[a][b]);
                                            }
                                            printf("\n");
                                        }
                                        printf("\nmatrix 2: \n");
                                        for (b=1 ; b<m+1 ; b++){
                                            for (d=1 ; d<p+1 ; d++){
                                                printf("%d   ", matrixdois[b][d]);
                                            }
                                            printf("\n");
                                        }
                                     //multiplicar as duas matrizes
                                        //matrixresult eh uma matrix que ira tomar o valor da soma das multiplicacoes das duas matrizes
                                       for (a=1; a<n+1; a++){
                                            for (d=1; d<p+1; d++){
                                                matrixresult[a][d]=0;//para na conta nao mostrar lixo de memoria
                                            }
                                        }
                                                for(a=1 ; a<n+1 ; a++){//aqui eu defino a linha da primeira matrix, sendo algo que varia pouco em comparacao com a coluna
                                                    for (d=1 ; d<p+1 ; d++){// aqui eu defino a coluna da segunda matrix
                                                        for (b=1 ; b<m+1 ; b++){//aqui varia os termos da primeira matriz com os termos da segunda
                                                            matrixresult[a][d]= matrixresult[a][d]+matrixum[a][b]*matrixdois[b][d];
                                                        }
                                                    }
                                                }
                                            //mostrar a matrix
                                            printf("\nA matriz resultante da multiplicacao das duas anteriores eh: \n");
                                                for(a=1 ; a<n+1 ; a++){
                                                    for (d=1 ; d<p+1 ; d++){
                                                       printf("%d   ", matrixresult[a][d]);
                                                    }
                                                    printf("\n");
                                                }
                                                printf("\n");}
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    break;
                                    //fim da multiplicacao de matrizes
                        case 52:{
                                //elevar os termos da matriz nxm ao quadrado
                                system("cls");
                                        printf("\n** Elevar os termos da matriz ao quadrado **\n");
                                        printf("\ndigite quantas linhas tem a matrix ==> ");
                                        scanf("%d", &n);
                                        printf("\ndigite quantas colunas tem a matrix ==> ");
                                        scanf("%d", &m);
                                        system("cls");
                                    int matrix[n][m], matrixresult[n][m];
                                        for (a=1 ; a<n+1 ; a++){
                                            for (b=1 ; b<m+1 ; b++){
                                                printf("\ndigite o valor de (%d)(%d)==> ", a, b);//colocar os valores da matriz
                                                scanf("%d", &matrix[a][b]);
                                            }
                                        }
                                        for (a=1; a<n+1; a++){
                                            for (b=1; b<m+1; b++){
                                        matrixresult[a][b]= matrix[a][b] * matrix[a][b];//conta
                                        }
                                    }
                                    system("cls");
                                    printf("\na matriz eh: \n");
                                        for (a=1 ; a<n+1 ; a++){
                                            for (b=1 ; b<m+1 ; b++){
                                        printf("%d   ", matrix[a][b]);
                                        }
                                        printf("\n");
                                    }
                                    printf("\na resposta eh: \n");
                                        for (a=1 ; a<n+1 ; a++){
                                            for (b=1 ; b<m+1 ; b++){
                                        printf("%d   ", matrixresult[a][b]);
                                        }
                                        printf("\n");
                                    }
                                    }
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    break;
                            case 53:
                                        for (v=2;v>1;v++){
                                        system("cls");
                                        printf("\n** Calcular determinate de matriz 1x1, 2x2, 3x3 ou 4x4 **");
                                        printf("\n\ndigite o numero de linhas e colunas ==> ");
                                        scanf("%d", &a);
                                        printf("\na matrix eh (%d)(%d)", a, a);
                                        int matrix[a][a];
                                        switch (a){
                                        case 1:
                                                printf("\ndigite o valor de (%d)(%d)==> ", a, a);
                                                scanf("%d", &result);
                                                system("cls");
                                                printf("a matriz eh:\n");
                                                printf("%d", result);
                                                printf("\n%d", result);
                                                printf("\nO valor da determinante eh: %d", result);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                            break;
                                        case 2:
                                                    for (i=1 ; i<a+1 ; i++){
                                                        for (j=1; j<a+1 ; j++){
                                                    printf("\ndigite o valor de (%d)(%d) ==> ", i, j);
                                                    scanf("%d", &matrix[i][j]);
                                                        }//for
                                                    }//for
                                                    printf("\n\n");
                                                    system("cls");
                                                    printf("a matriz eh: \n");
                                                     for (i=1 ; i<a+1 ; i++){
                                                        for (j=1; j<a+1 ; j++){
                                                    printf("%d  ", matrix[i][j]);
                                                        }//for
                                                        printf("\n");
                                                    }//for
                                                    for (i=1;i<a+1;i++){
                                                        for (j=1; j<3;j++){
                                                        printf("%d  ", matrix[i][j]);
                                                        }
                                                        printf("\n");
                                                    }
                                                result = matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1];//conta de uma matriz 2x2
                                                printf("\nO valor da determinante eh: %d", result);
                                                //}
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                            break;
                                        case 3:
                                                    for (i=1; i<4; i++){
                                                        for (j=1; j<4; j++){
                                                            printf("\ndigite o valor de (%d)(%d)==> ", i, j);
                                                            scanf("%d", &matrix[i][j]);
                                                        }
                                                    }
                                                    system("cls");
                                                    printf("a matriz eh: \n");
                                                    for (i=1; i<4; i++){
                                                        for (j=1; j<4; j++){
                                                            printf("%d  ", matrix[i][j]);
                                                        }
                                                        printf("\n");
                                                    }
                                                    result = matrix[1][1]*matrix[2][2]*matrix[3][3]+matrix[1][2]*matrix[2][3]*matrix[3][1];
                                                    result = result + matrix[1][3]*matrix[2][1]*matrix[3][2];
                                                    result = result - matrix[1][3]*matrix[2][2]*matrix[3][1];
                                                    result = result - matrix[1][2]*matrix[2][1]*matrix[3][3];
                                                    result = result - matrix[1][1]*matrix[2][3]*matrix[3][2];//conta de uma matriz 3x3
                                                    printf("\nO valor da determinante eh: %d", result);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                        break;
                                        case 4:
                                                for (i=1;i<5;i++){
                                                    for (j=1;j<5;j++){
                                                        printf("\ndigite o valor de (%d)(%d)==> ", i, j);
                                                        scanf("%d", &matrix[i][j]);
                                                    }
                                                }
                                                system("clear");
                                                printf("a matrix eh: \n");
                                                for (i=1;i<5;i++){
                                                    for (j=1;j<5;j++){
                                                        printf("%d  ", matrix[i][j]);
                                                    }
                                                    printf("\n");
                                                }
                                                //conta de uma matriz 4x4
                                                    result = matrix[2][2]*matrix[3][3]*matrix[4][4]+matrix[2][3]*matrix[3][4]*matrix[4][2];
                                                    result = result + matrix[2][4]*matrix[3][2]*matrix[4][3];
                                                    result = result - matrix[2][4]*matrix[3][3]*matrix[4][2];
                                                    result = result - matrix[2][3]*matrix[3][2]*matrix[4][4];
                                                    result = result - matrix[2][2]*matrix[3][4]*matrix[4][3];
                                                    resultadofinal1 = result*matrix[1][1];

                                                    result = matrix[1][2]*matrix[3][3]*matrix[4][4]+matrix[1][3]*matrix[3][4]*matrix[4][2];
                                                    result = result + matrix[1][4]*matrix[3][2]*matrix[4][3];
                                                    result = result - matrix[1][4]*matrix[3][3]*matrix[4][2];
                                                    result = result - matrix[1][3]*matrix[3][2]*matrix[4][4];
                                                    result = result - matrix[1][2]*matrix[3][4]*matrix[4][3];
                                                    resultadofinal2 = -result*matrix[2][1];

                                                    result = matrix[1][2]*matrix[2][3]*matrix[4][4]+matrix[1][3]*matrix[2][4]*matrix[4][2];
                                                    result = result + matrix[1][4]*matrix[2][2]*matrix[4][3];
                                                    result = result - matrix[1][4]*matrix[2][3]*matrix[4][2];
                                                    result = result - matrix[1][3]*matrix[2][2]*matrix[4][4];
                                                    result = result - matrix[1][2]*matrix[2][4]*matrix[4][3];
                                                    resultadofinal3 = result*matrix[3][1];

                                                    result = matrix[1][2]*matrix[2][3]*matrix[3][4]+matrix[1][3]*matrix[2][4]*matrix[3][2];
                                                    result = result + matrix[1][4]*matrix[2][2]*matrix[3][3];
                                                    result = result - matrix[1][4]*matrix[2][3]*matrix[3][2];
                                                    result = result - matrix[1][3]*matrix[2][2]*matrix[3][4];
                                                    result = result - matrix[1][2]*matrix[2][4]*matrix[3][3];
                                                    resultadofinal4 = -result*matrix[4][1];

                                                    resultadofinal = resultadofinal1+resultadofinal2+resultadofinal3+resultadofinal4;

                                                    printf("\nO valor da determinante eh: %d\n", resultadofinal);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    break;
                                            default :
                                                printf("\ndigite uma matriz de 1 a 4 linhas e colunas.");
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                                break;
                                        }//switch
                                        v=0;
                                        }//for

                                    break;
                        case 54:{
                                system("cls");
                                printf("**matriz transposta**\n");
                                printf("\ndigite a quantidade de linhas da matriz ==> ");
                                scanf("%d", &a);
                                printf("\ndigite a quantidade de colunas da matriz ==> ");
                                scanf("%d", &b);

                                int matrixum[a][b];
                                system("cls");
                                printf("\ndigite os valores da matriz 1: \n");
                                for (i=1;i<a+1; i++){
                                    for(j=1; j<b+1; j++){
                                        printf("\nvalor de (%d)(%d) ==> ", i, j);
                                        scanf("%d", &matrixum[i][j]);
                                    }
                                }
                                system("cls");
                                printf("matriz:\n");
                                for (i=1;i<a+1; i++){
                                    for(j=1; j<b+1; j++){
                                        printf("%d   ", matrixum[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\nmatriz transposta: \n");
                                for (j=1;j<b+1; j++){//observe que esta invertido o i com o j, pois calcula matriz transposta mostrando ela com as linhas trocadas pelas colunas
                                    for(i=1; i<a+1; i++){
                                        printf("%d   ", matrixum[i][j]);
                                        }
                                        printf("\n");
                                }
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                            break;
                            }
                        case 55:

                                    i=0;
                                    printf("\n\n");
                                    system("cls");
                                    break;
                        default:
                                    printf("\ndigite uma opcao valida.\n\n\n");
                                    break;
                            }
                            }
        break;
    case 51:
                for(i=2 ; i>1 ; i++){
                    system("cls");
                     printf("\n*** Calculadora de volumes ***\n\n");
                     printf(".1. para volume de esfera.\n");
                     printf(".2. para volume de cubos e paralelepipedos\n");
                     printf(".3. para volume de piramides\n");
                     printf(".4. para voltar ao menu principal.\n");
                     printf("digite sua opcao ==> ");
                     scanf("%c", &caracter2);
                     c = caracter2;
                        switch (c){
                            case 49:
                            system("cls");
                                printf("\n** Volume de esfera **\n");
                                printf("digite o raio da esfera ==> ");
                                scanf("%d", &a);
                                resultado = 3.141592 * a * a * a * 4/3;//conta do volume de uma esfera
                                printf("\no volume da esfera eh: %f\n", resultado);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                break;
                            case 50:
                                system("cls");
                                printf("\n** Volume de cubo ou paralelepipedo **\n");
                                printf("digite o valor do primeiro lado ==> ");
                                scanf("%d", &a);
                                printf("digite o valor do segundo lado ==> ");
                                scanf("%d", &b);
                                printf("digite o valor do terceiro lado ==> ");
                                scanf("%d", &c);
                                result = a * b * c;//conta do volume de um paralelepipedo
                                printf("o volume eh: %d", result);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                break;
                            case 51:
                                system("clear");
                                printf("\n** Volume de uma piramide **\n");
                                printf("digite a area da base==> ");
                                scanf("%d", &a);
                                printf("digite a altura ==> ");
                                scanf("%d", &b);
                                resultado = (float) a * b / 3;//conta do volume de uma piramide
                                printf("o volume eh: %f", resultado);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                break;
                            case 52:
                                i= 0;
                                system("clear");
                                break;
                            default:
                                printf("\ndigite uma opcao entre 1 e 4.\n\n\n");
                                break;
                        }//switch case 3
                        printf("\n");
                     }//for case 51
        break;
    case 52:{
                for(i=2;i>1;i++){
                system("cls");
                printf("\n** Calculadora de equacoes com 1 ou 2 variaveis**\n");
                printf("\ndigite o numero de variaveis ==> ");
                scanf("%c", &caracter2);
                c = caracter2;
                switch (c){
                    case 49:
                        for(v=2;v>1;v++){
                        system("cls");
                        printf("\nAx = B\n");
                        printf("\ndigite o valor de A ==> ");
                        scanf("%d", &a1);
                        if (a1==0){//pois nao existe n/0
                        printf("\ndigite valor de A diferente de zero.\n");

                        }
                        else {
                        printf("\ndigite o valor de B ==> ");
                        scanf("%d", &b1);
                        printf("\n%dx = %d\n", a1, b1);
                        resultx = (float)b1/a1;
                        printf("\nx = %f\n\n", resultx);
                        v=0;//para sair do for do if e else
                        i=0;//para sair do for do menu equacoes
                        }
                        }
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                        break;
                    case 50:
                        system("cls");
                        printf("\n|A1x + B1y = C1\n");//mostra o formato da conta
                        printf("|A2x + B2y = C2\n");
                        printf("digite o valor de A1==> ");
                        scanf("%d", &a1);
                        printf("\ndigite o valor de B1==> ");
                        scanf("%d", &b1);
                        printf("\ndigite o valor de C1==> ");
                        scanf("%d", &c1);
                        printf("\ndigite o valor de A2==> ");
                        scanf("%d", &a2);
                        printf("\ndigite o valor de B2==> ");
                        scanf("%d", &b2);
                        printf("\ndigite o valor de C2==> ");
                        scanf("%d", &c2);
                        printf("\n|%dx + %dy = %d", a1, b1, c1);
                        printf("\n|%dx + %dy = %d", a2, b2, c2);
                        //varios if e else pelas restricoes que existem em achar 2 variaveis
                        if (a1 == 0){
                            if (b1 == 0){
                                printf("\nnao eh possivel resolver\n");
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                            }
                            else{
                                if (a2==0){
                                    resulty=(float)c1/b1;
                                    printf("\ny==>%f", resulty);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                }
                                else{
                                resulty = (float)c1/b1;
                                resultx = (float)(c2-b2*resulty)/a2;
                                printf("\nx = %f", resultx);
                                printf("\ny = %f", resulty);
                                i=0;
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                }
                            }
                        }
                        else{
                            if(b1==0){
                                if (a2==0){
                                    if (b2==0){
                                    printf("\nnao eh possivel resolver\n");
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    }
                                    else{
                                    resulty = (float)c1/b1;
                                    printf("\ny==> %f", resulty);
                                    }
                                }
                                }
                            else{
                                if (a2==0){
                                    if (b2==0){
                                    printf("\nnao eh possivel resolver.\n");
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    }
                                    else{
                                    resulty = (float)c2/b2;
                                    resultx = (float)c1 - resulty*b1;
                                    printf("\nx==> %f", resultx);
                                    printf("\ny==> %f", resulty);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    }
                                }
                                else{
                                    if (b2==0){
                                        resultx = (float)c2/a2;
                                        resulty = (float)c1-resultx*a1;
                                        printf("\nx==> %f", resultx);
                                        printf("\ny==> %f", resulty);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    }
                                    else{
                                        resulty = (float)(a2*c1-a1*c2)/(b1*a2-b2*a1);
                                        resultx = (float)(c1-resulty*b1)/a1;
                                        printf("\nx = %f", resultx);
                                        printf("\ny = %f", resulty);
                                    printf("\ndigite algo para continuar: ");
                                    scanf("%d", &erro);
                                    }
                                }
                            }
                            }

                        i=0;
                    break;
            default :
                    system("cls");
                }
                }
                printf("\n\n\n");
    break;
    case 53:
                    w = 0;//para sair do menu principal
        break;
    default:
    system ("cls");
        printf("digite uma opcao valida!\n");
    break;
            }//switch
    }//for
//system("pause");
}}
//return 0;
//}//main
