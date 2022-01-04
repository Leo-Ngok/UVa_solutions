//p5714
#include <cstdio>
#include <iostream>
double h,m;
int main(){
	scanf("%lf%lf",&m,&h);
	double bmi=m/(h*h);
	if(bmi<18.5)printf("Underweight");
	else if(bmi>=18.5&&bmi<24)printf("Normal");
	else std::cout<<bmi<<std::endl<<"Overweight";
	return 0;
}
