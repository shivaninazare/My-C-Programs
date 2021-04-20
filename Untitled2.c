#include<stdio.h>
#include<math.h>

struct coordinates
{
	float x1;
	float x2;
	float y1;
	float y2;
};
struct coordinates read(struct coordinates co);
float euclidean_distance(struct coordinates co1);
int main()
{
	float x;
	struct coordinates co,co1;
	printf("Enter the co-ordinates of point A(x1,y1) and B(x2,y2) :\n");
	co1=read(co);
	x=euclidean_distance(co1);
	printf("Euclidean distance: %f",x);
	return 0;
}
struct coordinates read(struct coordinates co)
{
	printf("Enter the co-ordinates of point A(x1,y1):\n");
	scanf(" %f %f",&(co.x1),&(co.y1));
     if(((co.x1)>0)&&((co.y1)>0))
    {
        printf("Point A is in first quadrant\n");
    }
     if(((co.x1)<0)&&((co.y1)>0))
    {
        printf("Point A is in second quadrant\n");
    }
     if(((co.x1)<0)&&((co.y1)<0))
    {
        printf("Point A is in third quadrant\n");
    }
     if(((co.x1)>0)&&((co.y1)<0))
    {
        printf("Point A is in fourth quadrant\n");
    }
	printf("Enter the co-ordinates of point B(x2,y2):\n");
	scanf(" %f %f",&(co.x2),&(co.y2));
     if(((co.x2)>0)&&((co.y2)>0))
    {
        printf("Point B is in first quadrant\n");
    }
     if(((co.x2)<0)&&((co.y2)>0))
    {
        printf("Point B is in second quadrant\n");
    }
     if(((co.x2)<0)&&((co.y2)<0))
    {
        printf("Point B is in third quadrant\n");
    }
     if(((co.x2)>0)&&((co.y2)<0))
    {
        printf("Point B is in fourth quadrant\n");
    }
	return co;
}
float euclidean_distance(struct coordinates co1)
{
	float N,m,n,c;
	m=((co1.x2)-(co1.x1))*((co1.x2)-(co1.x1));
	n=((co1.y2)-(co1.y1))*((co1.y2)-(co1.y1));
	c=m+n;
	N=sqrt(c);

	return N;
}

