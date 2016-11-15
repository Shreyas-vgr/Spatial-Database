#include<stdio.h>
#include<math.h>

int main(){
	double pi = 3.142,t=0,dt = 0.03142,x,y;

	double tx = -118.288903,ty = 34.021118;
	while( t <= 2.0*pi){
		x = tx + (0.002 * cos(t) + 0.001 * cos(2.0 * t));
		y = ty + (0.002 * sin(t) - 0.001 * sin(2.0 * t));
	printf("%lf,%lf\n",x,y);
	t += dt;
	}
return 0;
}
