  if(a!=b || b!=c || a!=c)
    *iss==1;
  else
    *iss==-1;
}
void output(int a,int b,int c,int iss)
{
  if (iss==1)
     printf("it is scalene");
  else
     printf("it is not scalene");
}
int main()
{
  int a,b,c,iss;
  a=input();
  b=input();
  c=input();
  check_scalene(a,b,c,&iss);
  output(a,b,c,iss);
}