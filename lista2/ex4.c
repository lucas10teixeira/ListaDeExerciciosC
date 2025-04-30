int main()
{
float grauA, grauB, media_final;
printf("Digite a nota do Grau A: ");
scanf("%f", &grauA);
printf("Digite a nota do Grau B: ");
scanf("%f", &grauB);
media_final = (grauA + 2 * grauB) / 3.0;
printf("Sua média final é: %.2f\n", media_final);
return 0;
}