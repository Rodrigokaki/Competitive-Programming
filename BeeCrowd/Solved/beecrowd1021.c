#include <stdio.h>
 
int main() {
 
    double money;
    int amount100=0, amount50=0, amount20=0, amount10=0, amount5=0, amount2=0, amount1=0, amount05=0, amount025=0, amount010=0, amount005=0,amount001=0;
    
    scanf("%lf", &money);

    amount100 = money/100;
    money = money - (amount100*100);

    amount50 = money/50;
    money = money - (amount50*50);

    amount20 = money/20;
    money = money - (amount20*20);

    amount10 = money/10;
    money = money - (amount10*10);

    amount5 = money/5;
    money = money - (amount5*5);

    amount2 = money/2;
    money = money - (amount2*2);

    amount1 = money/1;
    money = money - (amount1*1);


    money *= 100;

    amount05 = money/50;
    money = money - (amount05*50);

    amount025 = money/25;
    money = money - (amount025*25);

    amount010 = money/10;
    money = money - (amount010*10);

    amount005 = money/5;
    money = money - (amount005*5);

    amount001 = money/1;
    money = money - (amount2*1);

    printf("NOTAS:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\n", amount100, amount50,amount20,amount10,amount5,amount2);
    printf("MOEDAS:\n%i moeda(s) de R$ 1.00\n%i moeda(s) de R$ 0.50\n%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n",amount1,amount05,amount025,amount010,amount005,amount001);
    
    return 0;
}