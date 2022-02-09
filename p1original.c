#include<stdio.h>
void input(float *base,float *height)
{
  printf ("enter the values of height and base \n");
  scanf("%f\n%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height ,float area)
{
  printf("the area pf the triangle of base %f and height %f is equal to %f",base,height,area);
}
  float main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}