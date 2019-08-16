#include <stdio.h>
#include <stdlib.h>
int get_number (char str[], int s, int e){
  int value = 0;
  for (int i = s; i <= e; ++i){
      value = value * 10 + str[i] - '0';
    }
  return value;
}
int days_of_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int zodiac_bound[13] = { 0, 21, 20, 21, 21, 22, 22, 23, 22, 24, 24, 23, 23 };
char zodiac_name[13][13] = {
  "capricorn", "aquarius", "pisces", "aries", "taurus", "gemini", "cancer",
  "leo", "virgo", "libra", "scorpio", "sagittarius", "capricorn"
};
int main (){
  int n;
  char buf[10];
  while (~scanf ("%d", &n))
    for (int i = 1; i <= n; ++i){
	    scanf ("%s", buf);
	    int month = get_number (buf, 0, 1);
	    int day = get_number (buf, 2, 3);
	    int year = get_number (buf, 4, 7);
	// leap year
	days_of_month[2] = 28 + (year % 4 == 0 && year % 100|| year % 400 == 0);
	day += 280;
	while (day > days_of_month[month]){
	    day -= days_of_month[month];
	    month++;
	    if (month > 12){
		month = 1;
		year++;
		days_of_month[2] = 28 + (year % 4 == 0 && year % 100||year % 400 == 0);
	    }
	}
	printf ("%d %02d/%02d/%04d ", i, month, day, year);
	if (day < zodiac_bound[month])
	    printf ("%s\n", zodiac_name[month - 1]);
	else
	    printf ("%s\n", zodiac_name[month]);
      }
  return 0;
}