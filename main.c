

Página
1
de 3
// QUESTÃO 01
#include <stdio.h>
int numeroInteiro(){
puts("Digite um número:");
int numero;
scanf("%i",&numero);
return numero;
}
int main(){
int numero=numeroInteiro();
if(numero %2==0){
puts("O número é par");
}else{
puts("O número é ímpar");
}
return 0;
}
// QUESTÃO 02
#include <stdio.h>
#include <stdlib.h>
void pastas(){
system("mkdir exercício");
system("mkdir avaliações");
system("mkdir notas");
}
int main(){
pastas();
return 0;
}
//QUESTÃO 3
#include <stdio.h>
int diff (int a, int b){
int d=b-a;
return d;
}
int min (int a, int b){
if(a < b){
return a;
}
else{
return b;
}
}
int max (int a, int b){
if(a < b){
return a;
}
else{
return b;
}
}
int main(){
puts("Digite dois valores:");
int a,b;
scanf("%i %i",&a,&b);
int diferenca=diff(a,b);
printf("Diferença: %i\n",diferenca);
return 0;
}
// QUESTÃO 04
#include <stdio.h>
#include <math.h>
void parabola (float a){
if (a > 0){
puts("Parábola voltada para cima");
}
if (a < 0){
puts("Parábola voltada para baixo");
}
if ( a == 0){
puts("Equação dp 1° Grau");
}
}
float delta ( float a, float b, float c){
float delta;
delta = pow(b, 2)-4*a*c;
return delta;
}
void raizes (float delta){
if (delta > 0){
puts("Duas raízes. A parábola toca a reta x em dos pontos (x é secante 
à parábola)");
}
if (delta < 0){
puts("Uma única raiz (o vértice da parábola toca a reta x)");
}
if (delta == 0){
puts("A parábola não toca a reta x.");
}
}
void raizesV (float a, float b, float delta){
float x1, x2;
if ((delta < 0 || delta > 0) && (a < 0 || a > 0)){
x1 = (-b + sqrt(delta))/(2*a);
x2 = (-b - sqrt(delta))/(2*a);
printf("Zeros da Função: %.2f %.2f \n",x1,x2);
}
else
puts("Não existem raízes.");
}
void vertice (float a, float b, float delta){
float xv, yv;
if (a == 0){
puts("Não há vérice para equação do 1° Grau");
}
else {
xv = -b / (2*a);
yv = - delta / (4*a);
printf("Vértice: %.2f %.2f \n",xv,yv);
}
}
int main(){
float a, b, c, deltaD;
puts("Digite os valores de: a, b e c da expressão (ax²+bx+c)");
scanf("%f %f %f", &a, &b, &c);
parabola(a);
deltaD = delta(a, b, c);
raizes(deltaD);
raizesV(a, b, deltaD);
vertice(a, b, deltaD);
return 0;
}
