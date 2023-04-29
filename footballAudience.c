#include <stdio.h>

int main() {

  int audience, popular, general, grandstand, seats, totalInc;

  printf("Enter the football audience: ");
  scanf("%d", &audience);

  //qtt of people
  popular = audience*0.1;
  general = audience*0.5;
  grandstand = audience*0.3;
  seats = audience*0.1;

  //qntt of income = people*ticketPrice;
  popular = popular*1;
  printf("\npopular = R$%d (10%)", popular);
  general = general*5;
  printf("\ngeneral = R$%d (50%)", general);
  grandstand = grandstand*10;
  printf("\ngrandstand = R$%d (30%)", grandstand);
  seats = seats*20;
  printf("\nseats = R$%d (10%)", seats);
  
  //totalIncome
  totalInc = popular+general+grandstand+seats;
  printf("\n\033[1mTotal Income: R$%d\033[0m", totalInc);

}
