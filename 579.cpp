#include<iostream>
#include<cstdio>
#include<cmath>

   int main() {
   	int hrs, mins;
   	while (1) {
   		scanf("%d:%d", &hrs, &mins);
   		if (hrs == 0 && mins == 0) break;
   		double hour_angle = (hrs*30)+((double)mins/2);
   		double min_angle = (mins*6);
   		double angle1 = hour_angle-min_angle;
   		if (angle1 < 0) angle1 += 360.00;
   		double angle2 = min_angle-hour_angle;
   		if (angle2 < 0) angle2 += 360.00;
   		double res = 0;
   		if (angle1 < angle2) res = angle1;
   		else res = angle2;
   		printf("%.3lf\n", res);
   	}
   	return 0;
  }
