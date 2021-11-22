

void main()
{
   int v = 100;
   int * ip;

      ip = &v;
      printf("%d %d %u %u", v, *ip, &v, ip);
}
