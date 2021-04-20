#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct coordinates
{
	int x1;
	int x2;
	int y1;
	int y2;
};
struct coordinates read(struct coordinates );
int euclidean_distance(struct coordinates );
int main()
{
	int x;
	struct coordinates co;
	printf("Enter the co-ordinates of point A(x1,y1) and B(x2,y2) :\n");
	read(co);
	x=euclidean_distance(co);
	printf("Euclidean distance: %d",x);
	return 0;
}
struct coordinates read(struct coordinates co)
{
	printf("Enter the co-ordinates of point A(x1,y1):\n");
	scanf(" %d %d",&(co.x1),&(co.y1));
	printf("Enter the co-ordinates of point B(x2,y2):\n");
	scanf(" %d %d",&(co.x2),&(co.y2));
	return co;
}
int euclidean_distance(struct coordinates co)
{
	int d,m,n;
	m=((co.x2)-(co.x1))*((co.x2)-(co.x1));
	n=((co.y2)-(co.y1))*((co.y2)-(co.y1));
	d=sqrt(m+n);
	return d;
}
